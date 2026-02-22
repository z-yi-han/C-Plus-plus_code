#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
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


//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	////d1=d2，赋值重载
//	//void operator =(const Date&d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//	
//	// d3 = d1
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		return *this;
//	}
//
//	// 拷贝构造
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	// 构造
//	Date(const Date* d)
//	{
//		_year = d->_year;
//		_month = d->_month;
//		_day = d->_day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//	//d1 + 100;
//	Date operator+(int day);
//
//	//d1 - 100;
//	Date operator-(int day);
//
//	// d1 - d2;
//	int operator-(const Date& d);
//
//	bool operator==(const Date& d)
//	{
//		return _year==d._year
//			&& _month == d._month
//			&&_day == d._day;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////bool operator==(const Date& d1, const Date& d2)
////{
////	return d1._year == d2._year
////		&& d1._month == d2._month
////		&& d1._day == d2._day;
////}
//
////int main()
////{
////	Date d1(2024, 7, 5);
////	Date d2(2024, 7, 6);
////
////	// 运算符重载函数可以显示调用
////	//operator==(d1, d2);
////	// 编译器会转换成 operator==(d1, d2);
////	//d1 == d2;
////
////	// 运算符重载函数可以显示调用
////	d1.operator==(d2);
////
////	// 编译器会转换成 d1.operator==(d2);
////	d1 == d2;
////
////	d1 + 100;
////	d1 - 100;
////	d1 - d2;
////
////	return 0;
////}
//
//
//int main()
//{
//
//	Date d1(2024, 7, 5);
//	Date d2(2024, 7, 6);
//
//	// 赋值重载
//	d1 = d2;
//
//	// 拷贝构造
//	Date d3(d2);
//	Date d4 = d2;
//	d4 = d3 = d1;//支持连续赋值
//	int i, j, k;
//	i = j = k = 1;
//	return 0;
//}


#include"Date.h"
int main()
{
	Date d1(2024, 7, 12);
	Date d2 = d1 + 100;
	//Date d3(d1 + 100);
	d1.Print();
	d2.Print();

	//d1 += 100;
	//d1.Print();

	d1 += 30000;
	d1.Print();
	return 0;
}