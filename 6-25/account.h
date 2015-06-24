//
//  account.h
//  6-25
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//

#ifndef __25_account_h
#define __25_account_h
#include "date.h"
#include <string>
class SavingAccount {
private:
    std::string id;
    double balance;
    double rate;
    Date lastDate;
    double accumulation;
    static double total;
    void record(const Date &date, double amount, const std::string &desc);
    void error(const std::string &msg) const;
    double accumulate(const Date& date){
        return accumulation+balance*date.distance(lastDate);
    }
    
public:
    SavingAccount(const Date &date, const std::string &id, double rate);
    const std::string &getId() const {return id;}
    double getBalance() const {return balance;}
    double getRate() const {return rate;}
    static double getTotal() {return total;}
    
    void deposit(const Date &date, double amount, const std::string &desc);
    void withdraw(const Date &date, double amount, const std::string &desc);
    void settle(const Date &date);
    void show() const;
};

#endif
