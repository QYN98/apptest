package com.testcases;

import com.base.BasePrepare;

import org.testng.annotations.Test;

public class CheckMessageAt extends BasePrepare {
        @Test
        public void checkma() throws InterruptedException {
            Thread.sleep(5000);
            driver.findElementByName("消息").click();
            Thread.sleep(5000);
            driver.findElementByName("消息").click();
            driver.findElementByName("@的消息").click();
            driver.findElementById("neet.com.youjidemo:id/ib_collection").click();

}
    }
