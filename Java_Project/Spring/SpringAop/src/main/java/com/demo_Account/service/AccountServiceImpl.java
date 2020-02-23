package com.demo_Account.service;

import com.demo_Account.dao.IAccountDao;
import com.demo_Account.entity.Account;
import com.demo_Account.utils.TransactionManager;

import java.util.List;

public class AccountServiceImpl implements IAccountService {

    private IAccountDao accountDao;


    @Override
    public void transfer(String sourceName, String targetName, Float money) {

        // 2.1.根据名称查找转出账户
        Account source = accountDao.findOneByName(sourceName);
        // 2.2.根据名称查找转入账户
        Account target = accountDao.findOneByName(targetName);
        // 2.3.转出账户金额减少
        source.setMoney(source.getMoney() - money);
        int i = 1 / 0;
        // 2.4.转入账户金额增加
        target.setMoney(target.getMoney() + money);
        // 2.5.更像转出、转入账户
        accountDao.update(source);
        accountDao.update(target);
    }

    public void setAccountDao(IAccountDao accountDao) {
        this.accountDao = accountDao;
    }

    @Override
    public List<Account> findAllAccount() {
        return accountDao.findAllAccount();
    }

    @Override
    public Account findOne(Integer accountId) {
        return accountDao.findOne(accountId);
    }

    @Override
    public void save(Account account) {
        accountDao.save(account);
    }

    @Override
    public void update(Account account) {
        accountDao.update(account);
    }

    @Override
    public void delete(Integer accountId) {
        accountDao.delete(accountId);
    }

}
