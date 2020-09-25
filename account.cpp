#include "account.h"
#include<math.h>

double SavingsAccount::total = 0;

SavingsAccount::SavingsAccount(Date date, string id, double rate) :lastDate(date), id(id), rate(rate)
{
	isstore = 0;
	lastDate = date;
	balance = 0;
	accumulation = 0;
	cout<< date << '\t' << "#" << id << " is created" << endl;
}

SavingsAccount::~SavingsAccount()
{

}

void SavingsAccount::deposit(Date date, double amount, string business)
{
	if ( isstore == 1 )
	{
		int BalanceDay = date - lastDate;
		balance += ((accumulation) * BalanceDay * rate) / 365;
		balance = floor(balance * 100 + 0.5) / 100;
	}
	else
	{
		isstore = 1;
	}
	lastDate = date;
	accumulation += amount;
	
	cout << date << '\t' << "#" << id << '\t' << amount << '\t' << accumulation << '\t' << business << endl;
}

void SavingsAccount::withdraw(Date date, double amount, string business)
{

	int BalanceDay = date - lastDate;
	lastDate = date; 
	balance += ((accumulation) * BalanceDay * rate)/365;
	balance = floor(balance * 100 + 0.5) / 100;
	accumulation -= amount;
	cout << date << '\t' << "#" << id << '\t' <<'-'<< amount << '\t' << accumulation << '\t' << business <<endl;
}

void SavingsAccount::settle(Date date)
{
	int BalanceDay = date - lastDate;
	balance += (accumulation * BalanceDay * rate)/365;
	balance = floor(balance * 100 + 0.5) / 100;
	accumulation += balance;
	total += accumulation;

	cout << date << '\t' << "#" << id << '\t' << balance << '\t' << accumulation<< '\t' <<"interest"<<endl;
}

void SavingsAccount::show()
{
	cout << "#" << id << '\t' << "Balance: " << accumulation;
}