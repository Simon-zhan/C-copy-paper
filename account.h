//银行账户创建 ver0.2
//41024346 2020-9-23 20:57:46
#pragma once
#include<iostream>
#include"date.h"
#include<string>
using namespace std;

class SavingsAccount
{
private:
	string id;
	double balance;
	double rate;
	Date lastDate;
	double accumulation;
	static double total;	//全部账户总金额
	bool isstore;

public:
	SavingsAccount(Date date, string id, double rate);
	~SavingsAccount();
	//double accumulate(int date);
	//int getid();
	//double getRate();
	//double getBalance();
	void show();
	static double getTotal() { return total; }
	void deposit(Date date, double amount, string business);
	void withdraw(Date date, double amount, string business);
	void settle(Date date);
	//void record(int date, double amount);

};

