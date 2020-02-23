package com.demo_Account2;

import com.demo_Account2.entity.Account;
import com.demo_Account2.config.SpringConfig;
import com.demo_Account2.service.IAccountService;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;
import org.springframework.test.context.junit4.SpringRunner;

import java.util.List;

@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration(classes = SpringConfig.class)
public class AccountServiceTest {
    @Autowired
    private IAccountService as;
    @Test
    public void findAll() {
//        ApplicationContext context = new AnnotationConfigApplicationContext(SpringConfig.class);
//        IAccountService as = context.getBean("accountService", IAccountService.class);
        List<Account> accounts = as.findAllAccount();
        for(Account account : accounts) {
            System.out.println(account);
        }
    }
}
