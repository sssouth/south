package com.demo1;

import com.demo1.service.Temp;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Main {
    public static void main(String[] args) {
        ApplicationContext context = new ClassPathXmlApplicationContext("bean1.xml");
        Temp temp = context.getBean("temp",Temp.class);
        temp.save();
        temp.update();
        temp.delete();
    }
}
