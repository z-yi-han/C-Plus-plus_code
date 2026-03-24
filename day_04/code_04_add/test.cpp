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
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day;
	}
	/*int GetYear()
	{
		return _year;
	}*/
	bool operator==(const Date &d2)
	{
		return _year == d2._year
			&& _month == d2._month
			&& _day == d2._day;
	}
	bool operator<(const Date& d2)
	{
		return _year > d2._year || (_year == d2._year && _month == d2._month) || (_year == d2._year && _month == d2._month && _day > d2._day);
	}
	//d1+100
	Date operator+(int day);
	//d1-100
	Date operator-(int day);
	//d1 - d2
	int operator-(const Date &d2);

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
	Date x1(2026, 3, 24);
	Date x2(2026, 3, 26);
	x1.operator==(x2);
	x1 == x2;
	return 0;
}
int main()
{

	return 0;
}








//class A
//{
//public:
//	void func()
//	{
//		cout << "A::func()" << endl;
//	}
//};
//
//
//typedef void(A:: * PF)();//成员函数指针
//
//int main()
//{
//	// void(A::*pf)() = nullptr;
//	PF pf = nullptr;
//	// C++规定成员函数要加&才能取到函数指针
//
//	pf = &A::func;
//	A aa;
//	(aa.*pf)();//回调成员函数
//}
//





