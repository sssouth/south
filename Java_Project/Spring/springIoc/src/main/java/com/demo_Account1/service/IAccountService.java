package com.demo_Account1.service;

import com.demo_Account1.entity.Account;

import java.util.List;

/**
 * 账户的业务层接口
 */
public interface IAccountService {
    /**
     * 查询所有账户
     * @return
     */
    List<Account> findAllAccount();

    /**
     * 查询一个账户
     * @param accountId
     * @return
     */
    Account findOne(Integer accountId);

    /**
     * 保存账户
     * @param account
     */
    void save(Account account);

    /**
     * 更新账户
     * @param account
     */
    void update(Account account);

    /**
     * 根据账户id进行删除
     * @param accountId
     */
    void delete(Integer accountId);
}
