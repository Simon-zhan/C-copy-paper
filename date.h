#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Date
{
	int GetMonthDays(int month);
	int _year;
	int _month;
	int _day;
	static int leapday;

public:
	Date(int year, int month, int day);
	~Date();
	bool IsLeapYear();	//判断是否为闰年
	Date& operator=(const Date& d);		//赋值运算符重载
	Date operator+(int day);	//一个日期加上一个天数
	Date operator-(int day);	//一个日期减去一个天数
	bool operator==(const Date& d);	//判断两个日期相等
	bool operator!=(const Date& d);	//判断两个日期不相等
	bool operator>(const Date& d);	//比较大小
	bool operator<(const Date& d);	//比较大小
	int operator-(const Date& d);	//两个日期之间间隔的天数

	//重载输出运算符
	friend ostream& operator<<(ostream& _cout, const Date d)
	{
		_cout << d._year << "-" << d._month << "-" << d._day;
		return _cout;
	}
};
