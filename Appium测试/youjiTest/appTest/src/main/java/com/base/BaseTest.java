package com.base;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.BeforeSuite;

import java.io.File;
import java.io.IOException;
import java.net.URL;

import io.appium.java_client.android.AndroidDriver;

public class BaseTest {
    AndroidDriver<WebElement> driver;
    @BeforeSuite
    public void startApp() throws IOException {

        File classpathRoot = new File(System.getProperty("user.dir"));
        File appDir = new File(classpathRoot+"/apps");
        File app = new File(appDir.getCanonicalPath(), "todolist.apk");
        DesiredCapabilities capabilities = new DesiredCapabilities();
//        capabilities.setCapability("deviceName", "127.0.0.1:62001");
        capabilities.setCapability("deviceName", "emulator-5554 device");
        capabilities.setCapability("app", app.getAbsolutePath());
        capabilities.setCapability("noReset",true);//保留历史数据
//        capabilities.setCapability("appPackage", "io.appium.android.apis");
//        capabilities.setCapability("appActivity", ".ApiDemos");
        capabilities.setCapability("appPackage", "com.example.todolist");
        capabilities.setCapability("appActivity", ".LoginActivity");
        capabilities.setCapability("unicodeKeyboard",true);
        capabilities.setCapability("resetKeyboard",true);
        driver =new  AndroidDriver<WebElement>(new URL("http://127.0.0.1:4723/wd/hub"),capabilities);
    }
//    @AfterSuite
    public void tearDown(){
        driver.quit();
    }
    public AndroidDriver getDriver() {
        return this.driver;
    }
}
