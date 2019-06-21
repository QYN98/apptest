package com.testcases;

import com.base.BasePrepare;

import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class Checktextandsendcomment extends BasePrepare {
    @Test
    public void checktextandsendcomment() throws InterruptedException {
        Thread.sleep(5000);

        driver.findElementByName("首页").click();
        driver.findElementById("neet.com.youjidemo:id/ib_good").click();
        driver.findElementById("neet.com.youjidemo:id/ib_judges").click();
        driver.findElementById("neet.com.youjidemo:id/tv_collectNum").click();
        driver.findElementByName("点击发表你的评论").click();

        driver.findElementById("neet.com.youjidemo:id/comment_content").sendKeys(" bug还没找到？ ？ ？ ");
        driver.findElementById("neet.com.youjidemo:id/comment_send").click();



    }
}
