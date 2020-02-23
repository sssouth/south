package com.demo_Account2.service;

import com.demo_Account2.entity.Account;

import java.util.List;

public interface IAccountService {

    List<Account> findAllAccount();

    Account findOne(Integer accountId);

    void save(Account account);

    void update(Account account);

    void delete(Integer accountId);
}
