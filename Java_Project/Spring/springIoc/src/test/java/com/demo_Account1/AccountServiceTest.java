package com.demo_Account1;

import com.demo_Account1.entity.Account;
import com.demo_Account1.service.IAccountService;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import java.util.List;

public class AccountServiceTest {
    /**
     * 测试取得所有账户
     */
    @Test
    public void findAll() {
        // 1.获取容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        //2. 获取 AccountService对象
        IAccountService accountService = context.getBean("accountService", IAccountService.class);
        // 3. 测试
        List<Account> accounts = accountService.findAllAccount();
        for(Account account : accounts) {
            System.out.println(account);
        }
    }

    /**
     * 测试根据id取得账户
     */
    @Test
    public void findOne() {
        // 1.获取容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        //2. 获取 AccountService对象
        IAccountService accountService = context.getBean("accountService", IAccountService.class);
        // 3. 测试
        Account account = accountService.findOne(1);
        System.out.println(account);
    }

    /**
     * 测试保存账户
     */
    @Test
    public void save() {
        // 1.获取容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        //2. 获取 AccountService对象
        IAccountService accountService = context.getBean("accountService", IAccountService.class);
        // 3. 测试
        Account account = new Account();
        account.setName("d");
        account.setMoney((float) 12345);
        accountService.save(account);
    }

    /**
     * 测试更新账户
     */
    @Test
    public void update() {
        // 1.获取容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        //2. 获取 AccountService对象
        IAccountService accountService = context.getBean("accountService", IAccountService.class);
        // 3. 测试
        Account account = accountService.findOne(4);
        account.setMoney((float) 12333);
        accountService.update(account);
    }

    /**
     * 测试删除账户
     */
    @Test
    public void findAllAccount() {
        // 1.获取容器
        ApplicationContext context = new ClassPathXmlApplicationContext("beans.xml");
        //2. 获取 AccountService对象
        IAccountService accountService = context.getBean("accountService", IAccountService.class);
        // 3. 测试
        accountService.delete(4);
    }
}
