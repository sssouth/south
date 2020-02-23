package com.demo_Account2.dao;

import com.demo_Account2.entity.Account;

import java.util.List;

public interface IAccountDao {

    List<Account> findAllAccount();

    Account findOne(Integer accountId);

    void save(Account account);

    void update(Account account);

    void delete(Integer accountId);
}
