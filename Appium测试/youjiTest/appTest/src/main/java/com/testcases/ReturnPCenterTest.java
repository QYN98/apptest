package com.testcases;
import com.base.BasePrepare;

import org.testng.annotations.Test;

public class ReturnPerCenter extends BasePrepare {
    @Test
    public void personalcenter() throws InterruptedException {
        Thread.sleep(2000);

        driver.findElementByName("我的").click();
        driver.findElementByName("个人中心").click();
        Thread.sleep(3000);
        driver.findElementById("neet.com.youjidemo:id/btn_cancel").click();

    }
}
