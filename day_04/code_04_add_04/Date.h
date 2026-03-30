#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<assert.h>
using namespace std;

class Date {

	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

public:
	Date(int year = 1900, int month = 1, int day = 1);
	void Print() const;
	//Ä¬ÈÏÄÚÁª
	int GetMonthDay(int year, int month) const
	{
		assert(month > 0 && month < 13);
		static int monthDayArray[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)));
		{
			return 29;
		}
		return monthDayArray[month];
	}


	bool CheckDate() const;


	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator!=(const Date& d)const;

	Date& operator+=(int day);
	Date& operator-=(int day);
	Date operator+(int day)const;
	Date operator-(int day)const;

	Date operator++(int);//d1++
	Date& operator++();//++d1
	Date operator--(int);//d1--
	Date& operator--();//--d1

	int operator-(const Date& d)const;//d1 - d2

	//void operator<<(ostream& out);
private:
	int _year;
	int _month;
	int _day;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);