package com.testcases;

import com.base.BasePrepare;
import com.pages.AddnotesPage;

import org.testng.Assert;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class AddnotesTest extends BasePrepare {
    @Test(dataProvider = "")
    public void notes(){
        AddnotesPage add=new AddnotesPage(getDriver());
        add.notes("一片新天地");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    /*@Test
    public void addnotes() throws InterruptedException {
        Thread.sleep(5000);
        driver.findElementByName("收藏").click();
        driver.findElementByName("编辑").click();
        driver.findElementById("neet.com.youjidemo:id/list").sendKeys("一片新天地");

}*/
}
}
