package com.demo_Account.service;

import com.demo_Account.entity.Account;

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

    /**
     * 转账业务
     * @param source 转出账户名称
     * @param target 转入账户名称
     * @param money  转账金额
     */
    void transfer(String source, String target, Float money);
}
