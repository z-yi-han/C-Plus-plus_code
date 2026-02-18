#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class Queue
//{
//public:
//	void Push(int x)
//	{}
//};
//
//class Stack
//{
//public:
//	void Push(int x)
//	{}
////public:
//	void Pop()
//	{}
//
//	int Top()
//	{
//		return 0;
//	}
//private:
//	int* a;
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.Pop();
//	st.Push(1);
//	//st.a;
//
//	return 0;
//}

//// class Date
//struct Date
//{
//public:
//	void Init(int year, int month, int day);
//
//private:
//	int _year; // 特殊标记
//	int _month;
//	int _day;
//};
//
//void Date::Init(int year, int month, int day)
//{
//	//声明
//	_year = year;
//	_month = month;
//	_day = day;
//}
//
//// 兼容C的struct用法
//typedef struct ListNodeC
//{
//	int val;
//	struct ListNodeC* next;
//}LTNodeC;
//
//// CPP
//struct ListNodeCPP
//{
//	int val;
//	ListNodeCPP* next;
//};
//
//int main()
//{
//	Date d2;
//	Date d3;
//
//	d2.Init(2024, 7, 9);
//
//	struct Date d1;
//
//	ListNodeCPP node;
//
//	//Date::_year = 2024;
//
//	return 0;
//}       



//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	// void Init(Date* const this, int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	// void Print(Date* const this)
//	void Print()
//	{
//		cout << this->_year << "/" << this->_month << "/" << _day << endl;
//	}
//
//private:
//	// 这里只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//
//class B
//{
//public:
//	void Print()
//	{
//		//...
//	}
//};
//class C
//{};
//
//int main()
//{
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//
//	// d1.Init(&d1, 2024, 3, 31);
//	d1.Init(2024, 3, 31);
//	// d1.Print(&d1);
//	d1.Print();
//
//	// d2.Init(&d2, 2024, 7, 5);
//	d2.Init(2024, 7, 5);
//	// d2.Print(&d2);
//	d2.Print();
//
//	//A a;
//	//B b;
//	//C c;
//	////cout << sizeof(a) << endl;
//	//cout << &b << endl;
//	//cout << sizeof(b) << endl;
//	//cout << sizeof(c) << endl;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	void Print()
//	{
//		cout << this << endl;
//		cout << "A::Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	            // mov ecx  p
//	p->Print(); // call  地址
//	//p->_a = 1;
//
//	A aa;
//
//	return 0;
//}


#include<iostream>
using namespace std;
class A
{
public:
	void Print()
	{
		cout << "A::Print()" << endl;
		cout << _a << endl;
	}
private:
	int _a;
};
int main()
{
	A* p = nullptr;
	p->Print();
	return 0;
}