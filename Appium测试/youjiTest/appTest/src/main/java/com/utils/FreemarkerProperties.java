package com.utils;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Properties;

public class FreemarkerProperties{
    public static final String filePath="conf/config.html";

    public static String getPropertyValue(String key) throws IOException {
        Properties prop = new Properties();
        FileInputStream fis = new FileInputStream(filePath);
        prop.load(fis);
        fis.close();
        return prop.getProperty(key);

    }
}