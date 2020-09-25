#include"date.h"


Date::Date(int year = 1900, int month = 1, int day = 1) :_year(year), _month(month), _day(day)
//输入日期的合法性判断
{
	if (!((year > 0) && (month > 0 && month < 13) && (day > 0 && day <= GetMonthDays(_month))))
	{
		//不合法日期自动变成1990-1-1
		_year = 1900;
		_month = 1;
		_day = 1;
	}
}

Date::~Date()
{

}

bool Date::IsLeapYear()
{
	if (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0))
	{
		return true;
	}
	return false;
}

Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}

Date Date::operator+(int day)
{
	if (day < 0)//天数若为负数变为减
	{
		return *this - (0 - day);
	}
	Date temp(*this);
	temp._day += day;
	int daysInMonth = temp.GetMonthDays(temp._month);
	while (temp._day > daysInMonth)
	{
		temp._day -= daysInMonth;
		temp._month += 1;
		if (temp._month > 12)
		{
			temp._year += 1;
			temp._month = 1;
		}
	}
	return temp;
}

Date Date::operator-(int day)
{
	if (day < 0)//天数若为负数变为加
	{
		return *this + (0 - day);
	}
	Date temp(*this);
	temp._day -= day;
	while (temp._day <= 0)
	{
		temp._month--;
		if (temp._month <= 0)
		{
			temp._year--;
			temp._month = 12;
		}
		temp._day += temp.GetMonthDays(temp._month);
	}
	return temp;
}

int Date::operator-(const Date& d)
{
	Date maxdate(*this);
	Date mindate(d);
	if (maxdate < mindate)
	{
		maxdate = mindate;
		mindate = *this;
	}
	int count = 0;
	while (mindate < maxdate)
	{
		mindate = mindate + 1;
		++count;
	}
	return count;
}

bool Date::operator==(const Date& d)
{
	if ((_year == d._year) && (_month == d._month) && (_day == d._day))
	{
		return true;
	}
	return false;
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

bool Date::operator>(const Date& d)
{
	if ((_year > d._year) || ((_year == d._year) && (_month > d._month))
		|| ((_year == d._year) && (_month == d._month) && (_day > d._day)))
	{
		return true;
	}
	return false;
}


bool Date::operator<(const Date& d)
{
	return !(*this > d || *this == d);
}

int Date::GetMonthDays(int month)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapYear() && (2 == month))//在这里改变2月的天数
	{
		days[month] += 1;
	}
	return days[month];
}

