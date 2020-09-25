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
	bool IsLeapYear();	//�ж��Ƿ�Ϊ����
	Date& operator=(const Date& d);		//��ֵ���������
	Date operator+(int day);	//һ�����ڼ���һ������
	Date operator-(int day);	//һ�����ڼ�ȥһ������
	bool operator==(const Date& d);	//�ж������������
	bool operator!=(const Date& d);	//�ж��������ڲ����
	bool operator>(const Date& d);	//�Ƚϴ�С
	bool operator<(const Date& d);	//�Ƚϴ�С
	int operator-(const Date& d);	//��������֮����������

	//������������
	friend ostream& operator<<(ostream& _cout, const Date d)
	{
		_cout << d._year << "-" << d._month << "-" << d._day;
		return _cout;
	}
};
