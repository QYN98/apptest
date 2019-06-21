package com.testcases;

import com.base.BasePrepare;
import com.pages.CheckmenuPage;

import org.testng.Assert;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class CheckmenuTest extends BasePrepare {
    @Test(dataProvider = "")
    public void menus(){
        CheckmenuPage loginPage =new CheckmenuPage(getDriver());
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
   /* @Test
    public void checkmenu() throws InterruptedException {
        Thread.sleep(5000);

        driver.findElementByName("美食").click();
        Thread.sleep(5000);
        driver.findElementByName("游玩").click();
        Thread.sleep(5000);
        driver.findElementByName("逛街").click();
        Thread.sleep(5000);
        driver.findElementByName("滑冰").click();
        Thread.sleep(5000);
        driver.findElementByName("摄影").click();
    }*/
