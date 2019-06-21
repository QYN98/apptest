package com.testcases;
import com.base.BasePrepare;

import org.testng.annotations.Test;

public class ReturnPerCenter extends BasePrepare {
    @Test
    public void personalcenter() throws InterruptedException {
        Thread.sleep(5000);

        driver.findElementByName("我").click();
        driver.findElementByName("个人中心").click();
        Thread.sleep(5000);
        driver.findElementById("neet.com.youjidemo:id/btn_cancel").click();

    }
}
