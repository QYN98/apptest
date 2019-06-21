package com.testcases;

import com.base.BasePrepare;
import com.pages.CommentPage;

import org.testng.Assert;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

public class CommentTest extends BasePrepare {
    @Test(dataProvider = "")
    public void comment(){
        CommentPage commentPage =new CommentPage(getDriver());
        commentPage.comment("没什么可说的");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}
   /* public void comment() throws InterruptedException {
        Thread.sleep(5000);

        driver.findElementByXPath("//*[@text='社区']").click();
        driver.findElementById("neet.com.youjidemo:id/image_btn_food").click();
        driver.findElementByXPath("//*[@text='广场']").click();
        driver.findElementById("neet.com.youjidemo:id/iv_contentimage").click();
        driver.findElementByXPath("//*[@text='点击发表你的评论']").click();

        driver.findElementById("neet.com.youjidemo:id/comment_content").sendKeys(" bug还没找到？ ？ ？ ");
        driver.findElementById(" neet.com.youjidemo:id/comment_send").click();





}
}*/
