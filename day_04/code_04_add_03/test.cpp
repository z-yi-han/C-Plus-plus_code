//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	 Time(int hour=0)
//		 : _hour(hour)
//		 {
//		 cout << "Time()" << endl;
//		 }
//private:
//	 int _hour;
//	 };
//class Date{
//public:
//	Date(int& xx, int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		//,_year(1)
//		, _n(1)
//		, _ref(xx)
//		, _t(1)
//		, _ptr((int*)malloc(12))
//		//函数体
//	{
//		if (_ptr == nullptr)
//		{
//			perror("malloc fail");
//		}
//		else
//		{
//			memset(_ptr, 0, 12);
//		}
//	}
//	void Print()const
//	{
//		cout << _year << "-" << _month << "-"<<_day << endl;
//	}
//private:
//	//声明
//	int _year;
//	int _month;
//	int _day;
//	//必须在初始化列表初始化
//	const int _n;
//	int &_ref;
//	Time _t;
//	int* _ptr;
//};
//int main()
//{
//	int x = 0;
//	Date d1(x,2026, 2, 26);
//	d1.Print();
//	return 0;
//}




//class Date {
//public:
//	Date( int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		//, _day(day)		
//	{}
//	void Print()const
//	{
//		cout << _year << "-" << _month<<"-" << _day << endl;
//	}
//private:
//	//声明,即使这样也是定义,后面的值相当于缺省值
//	int _year=1;
//	int _month=1;
//	int _day=1;
//	int* _ptr = (int*)malloc(12);
//};
//int main()
//{
//	Date d1(2026,2,26);
//	d1.Print();
//	return 0;
//} 




//#include<iostream>
//using namespace std;
//class A
//{
// public:
//	 A(int a)
//		 : _a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private://先声明的先初始化
//	int _a2 = 2;
//	int _a1 = 2;       
//};
//int main()
//{
//	A aa(1);
//	aa.Print();
//}


#include<iostream>
using namespace std;
class A
{
public:
	//explicit A(int a = 0)
	A(int a = 0)
		:_a1(a)
	{}
	A(const A& aa)
	{
		_a1 = aa._a1;
	}
	void Print()
	{
		cout << _a1 << " " << _a2;
	}
private:
	int _a2;
	int _a1;
};
class Stack
{
public:
	void Push(const A& aa)
	{
		//.......
	}
private:
	A _arr[10];
	int _top;
};
int main()
{
	A aa1(1);
	aa1.Print();

	//隐式类型转换
	A aa2 = 2;
	aa2.Print();

	A& raa1 = aa2;
	//A& ra2 = 2;
	const A& ra2 = 2;

	Stack st;
	A aa3(3);
	st.Push(aa3);

	st.Push(3);//单参数才支持
	return 0;
}