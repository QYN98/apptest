package com.testcases;

import com.base.BasePrepare;

import org.testng.annotations.Test;

public class Playmessage extends BasePrepare {
    @Test
    public void playm() throws InterruptedException {
        Thread.sleep(5000);
        driver.findElementByName("游玩").click();
        driver.findElementById("neet.com.youjidemo:id/tv_description").click();
        Thread.sleep(5000);
        driver.findElementById("neet.com.youjidemo:id/ib_good").click();
    }
}
