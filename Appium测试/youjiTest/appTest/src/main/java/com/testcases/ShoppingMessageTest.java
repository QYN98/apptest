package com.testcases;

import com.base.BasePrepare;
import com.pages.ShoppingMessagePage;

import org.testng.Assert;
import org.testng.annotations.Test;

public class ShoppingMessageTest extends BasePrepare {
    @Test(dataProvider = "")
    public void message(){
        ShoppingMessagePage playmessagePagePage =new ShoppingMessagePage(getDriver());
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
   /* @Test
    public void shshoppingm() throws InterruptedException {
        Thread.sleep(5000);
        driver.findElementByName("逛街").click();
        driver.findElementById("neet.com.youjidemo:id/tv_description").click();
        Thread.sleep(5000);
        driver.findElementById("neet.com.youjidemo:id/ib_good").click();
    }*/
}
