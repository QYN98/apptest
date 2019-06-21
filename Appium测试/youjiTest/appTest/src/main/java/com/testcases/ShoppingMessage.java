package com.testcases;

import com.base.BasePrepare;

import org.testng.annotations.Test;

public class ShoppingMessage extends BasePrepare {
    @Test
    public void shshoppingm() throws InterruptedException {
        Thread.sleep(5000);
        driver.findElementByName("逛街").click();
        driver.findElementById("neet.com.youjidemo:id/tv_description").click();
        Thread.sleep(5000);
        driver.findElementById("neet.com.youjidemo:id/ib_good").click();
    }
}
