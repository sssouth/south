package com.demo_Account.dao;

import com.demo_Account.entity.Account;
import com.demo_Account.utils.ConnectionUtil;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import java.util.List;

/**
 * 账户的实体类
 */

public class AccountDaoImpl implements IAccountDao{

    private QueryRunner runner;

    private ConnectionUtil connectionUtil;

    public void setConnectionUtil(ConnectionUtil connectionUtil) {
        this.connectionUtil = connectionUtil;
    }

    public void setRunner(QueryRunner runner) {
        this.runner = runner;
    }

    @Override
    public List<Account> findAllAccount() {
        try {
            return runner.query(connectionUtil.getThreadConnection(),"select * from account",new BeanListHandler<Account>(Account.class));
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public Account findOne(Integer accountId) {
        try {
            return runner.query(connectionUtil.getThreadConnection(),"select * from account where id = ?",new BeanHandler<>(Account.class),accountId);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public Account findOneByName(String accountName) {
        try {
            List<Account> accounts = runner.query(connectionUtil.getThreadConnection(),"select * from account where name = ?",new BeanListHandler<>(Account.class),accountName);
            if(accounts == null || accounts.size() == 0) {
                return null;
            } else if (accounts.size() > 1) {
                throw new RuntimeException("查找结果多余一个账户,查找失败.");
            }
            return accounts.get(0);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public void save(Account account) {
        try {
            runner.update(connectionUtil.getThreadConnection(),"insert into account(name, money)values(?,?)",account.getName(),account.getMoney());
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public void update(Account account) {
        try {
            runner.update(connectionUtil.getThreadConnection(),"update account set name = ?, money = ? where id = ?",account.getName(),account.getMoney(),account.getId());
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    @Override
    public void delete(Integer accountId) {
        try {
            runner.update(connectionUtil.getThreadConnection(),"delete from account where id = ?",accountId);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
