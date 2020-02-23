package com;

import com.demo_Account.service.IAccountService;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;


public class demo_AccountTest {

    @Test
    public void transferTest() {
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        IAccountService as = context.getBean("accountService", IAccountService.class);
        as.transfer("a","e",100f);
    }
}
