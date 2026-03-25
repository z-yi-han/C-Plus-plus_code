#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day;
	}
	/*int GetYear()
	{
		return _year;
	}*/
	bool operator==(const Date& d2)
	{
		return _year == d2._year
			&& _month == d2._month
			&& _day == d2._day;
	}
	bool operator<(const Date& d2)
	{
		return _year > d2._year || (_year == d2._year && _month == d2._month) || (_year == d2._year && _month == d2._month && _day > d2._day);
	}
	Date& operator=(const Date& d)
	{
		_year = d._day;
		_month = d._month;
		_day = d._day;

		return *this;
	}
	//d1+100
	Date operator+(int day);
	//d1-100
	Date operator-(int day);
	//d1 - d2
	int operator-(const Date& d2);

private:
	int _year;
	int _month;
	int _day;
};
//bool operator<(Date d1,Date d2)
//{
//
//}
//bool operator==(Date d1, Date d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
int main()
{
	Date d1(2026, 3, 25);
	Date d2(2026, 3, 26);

	//赋值运算符重载
	//d1 = d2;

	//拷贝构造
	Date d3(d2);
	Date d4 = d2;


	d4 = d3 = d1;
	/*int i, j, k;
	i = j = k = 1;*/

	return 0;
}