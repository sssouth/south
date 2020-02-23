package com.demo_Account1.dao;

import com.demo_Account1.entity.Account;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;

import java.util.List;

/**
 * 账户的实体类
 */
@Repository("accountDao")
public class AccountDaoImpl implements IAccountDao{
    @Autowired
    private QueryRunner runner;

    public void setRunner(QueryRunner runner) {
        this.runner = runner;
    }

    @Override
    public List<Account> findAllAccount() {
        try {
            return runner.query("select * from account",new BeanListHandler<Account>(Account.class));
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    @Override
    public Account findOne(Integer accountId) {
        try {
            return runner.query("select * from account where id = ?",new BeanHandler<>(Account.class),accountId);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return  null;
    }

    @Override
    public void save(Account account) {
        try {
            runner.update("insert into account(name, money)values(?,?)",account.getName(),account.getMoney());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void update(Account account) {
        try {
            runner.update("update account set name = ?, money = ? where id = ?",account.getName(),account.getMoney(),account.getId());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void delete(Integer accountId) {
        try {
            runner.update("delete from account where id = ?",accountId);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
