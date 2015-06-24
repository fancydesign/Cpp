//
//  6-25.cpp
//  6-25
//
//  Created by 峂峂 on 15/6/24.
//  Copyright (c) 2015年 峂峂. All rights reserved.
//

#include"account.h"
#include<iostream>
using namespace std;
int main(int argc, const char * argv[]){
    Date date(2008,11,1) ;
    SavingAccount accounts[]={
        SavingAccount(date,"03755217",0.015),
        SavingAccount(date,"02342342",0.015)
    };
    const int n=sizeof(accounts)/sizeof(SavingAccount);
    accounts[0].deposit(Date(2008,11,5),5000,"salary");
    accounts[1].deposit(Date(2008,11,25),10000,"sell stock 0323");
    accounts[0].deposit(Date(2008,12,5),5500,"salary");
    accounts[1].withdraw(Date(2008,12,20),4000,"buy a laptop");
    cout<<endl;
    for(int i=0;i<n;i++){
        accounts[i].settle(Date(2009,1,1));
        accounts[i].show();
        cout<<endl;
    }
    cout<<"Total:"<<SavingAccount::getTotal()<<endl;
    return 0;
}