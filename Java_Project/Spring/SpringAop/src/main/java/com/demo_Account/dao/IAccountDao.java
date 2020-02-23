package com.demo_Account.dao;

import com.demo_Account.entity.Account;

import java.util.List;

/**
 * 账户的实体类接口
 */
public interface IAccountDao {
        /**
         * 查询所有账户
         * @return
         */
        List<Account> findAllAccount();

        /**
         * 通过账户id查询账户
         * @param accountId
         * @return
         */
        Account findOne(Integer accountId);

        /**
         * 通过账户名称查询账户
         * @param accountName
         * @return
         */
        Account findOneByName(String accountName);

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
