package com.testcases;

import com.base.BasePrepare;

import org.testng.annotations.Test;

public class CheckMessageComment extends BasePrepare{

        @Test
        public void checkmc() throws InterruptedException {
            Thread.sleep(5000);
            driver.findElementByName("消息").click();
            Thread.sleep(5000);
            driver.findElementByName("消息").click();
            driver.findElementByName("评论").click();
            Thread.sleep(5000);
            driver.findElementById("neet.com.youjidemo:id/tv_reply_me").click();
            Thread.sleep(5000);
            driver.findElementByName("评论").click();

    }
}
