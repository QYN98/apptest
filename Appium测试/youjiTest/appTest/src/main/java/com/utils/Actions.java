package com.utils;

import org.openqa.selenium.Point;
import org.openqa.selenium.WebElement;

import io.appium.java_client.TouchAction;
import io.appium.java_client.android.AndroidDriver;
import io.appium.java_client.android.AndroidTouchAction;
import io.appium.java_client.touch.offset.PointOption;

import static io.appium.java_client.touch.LongPressOptions.longPressOptions;
import static io.appium.java_client.touch.WaitOptions.waitOptions;
import static io.appium.java_client.touch.offset.ElementOption.element;
import static io.appium.java_client.touch.offset.PointOption.point;
import static java.time.Duration.ofSeconds;

public class Actions {
    public AppiumDriver driver;
    public TouchAction ta;
    public Actions aca;
    public Actions(AndroidDriver<WebElement> driver){
        this.driver=driver;
         aca= new AndroidTouchAction(driver);
         ta = new TouchAction(driver);
    }

    public void type(WebElement element,String context){
             element.sendKeys(context);
    }

    public void click(WebElement element){
        element.click();
    }
    //在元素中间进行点击
    public void tap(By by) {
        tac.tap(driver.findElement(by)).release().perform();
    }
    //长按
    public void longPress(WebElement ele){
        ta.longPress(element(ele)).perform();
    }
    //坐标点的滑动
    public void swip(PointOption fromOption, PointOption toOption, long time){
        aca.press(fromOption).waitAction(waitOptions(ofSeconds(time))).
                moveTo(toOption).perform();
    }
    //元素间的滑动
    public void swip(WebElement fromEle, WebElement toEle, long time){

        aca.press(element(fromEle)).waitAction(waitOptions(ofSeconds(time))).
                moveTo(element(toEle)).perform();
    }

    public void drop(WebElement fromEle, WebElement toEle){
              ta.longPress(element(fromEle))
                .moveTo(element(toEle))
                .perform();
    }

    public void drop(WebElement fromEle, WebElement toEle,Long time){
        ta.longPress(longPressOptions()
                .withElement(element(fromEle))
                .withDuration(ofSeconds(2)))
                .moveTo(element(toEle))
                .perform();
    }

    public void click(By by) {
        driver.findElement(by).click();
    }

    //是否上下滑动
    public void swipe(By startElement, By endElement, boolean Up) {

        Point beginLoc;
        WebElement start = driver.findElement(startElement);
        beginLoc = start.getLocation();
        WebElement end;
        driver.manage().timeouts().implicitlyWait(2, TimeUnit.SECONDS);

        while (true) {
            try {
                end = driver.findElement(endElement);
                break;
            } catch (Exception e) {
                if (Up) {
                    driver.swipe(beginLoc.getX(), beginLoc.getY(), beginLoc.getX() + 30, beginLoc.getY() + 90, 40);
                } else {
                    driver.swipe(beginLoc.getX(), beginLoc.getY(), beginLoc.getX() - 30, beginLoc.getY() - 90, 40);
                }
            }
        }
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);

    }

    //向左滑动
    public  void categorySwipe(By source){
        WebElement start =driver.findElement(source);
        Point beginLoc=start.getLocation();
        driver.swipe(beginLoc.getX(), beginLoc.getY(), beginLoc.getX() - 700, beginLoc.getY(), 4000);
    }

    public void setValue(By by,String value){
        driver.findElement(by).clear();
        driver.findElement(by).sendKeys(value);

    }
    public void type(WebElement element,String context){
        element.sendKeys(context);
    }
    //点到点之间的拖动
    public void drop(Point fromPoint , Point toPoint){
        ta.longPress(point(fromPoint.x, fromPoint.y))
                .moveTo(point(toPoint.x, toPoint.y))
                .perform();
    }
}
}
