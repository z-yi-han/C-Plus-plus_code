#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//class A
//{
//public:
//	// 构造函数explicit就不再⽀持隐式类型转换
//	// explicit A(int a1)
//	A(int a1=0)
//		:_a1(a1)
//	{
//	}
//	//explicit A(int a1, int a2)
//	A(int a1, int a2)
//		:_a1(a1)
//		, _a2(a2)
//	{
//	}
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//		int Get() const
//	{
//		return _a1 + _a2;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//class B
//{
//public:
//	B(const A& a)
//		:_b(a.Get())
//	{
//	}
//private:
//	int _b = 0;
//};
//class Stack
//{
//public:
//	void Push(const A& aa)
//	{
//		//.......
//	}
//private:
//	A _arr[10];
//	int _top;
//};
//int main()
//{
//	// 1构造⼀个A的临时对象，再⽤这个临时对象拷⻉构造aa3
//	// 编译器遇到连续构造+拷⻉构造->优化为直接构造
//	A aa1 = 1;
//	aa1.Print();
//	const A& aa2 = 1;
//
//	Stack st;
//	st.Push(aa2);
//	st.Push(1);
//
//	// C++11之后才⽀持多参数转化
//	A aa3 = { 2,2 };
//	// aa3隐式类型转换为b对象
//	// 原理跟上⾯类似
//	B b = aa3;
//	const B& rb = aa3;
//	return 0;
//}



//class Time
//{
//public:
//	 Time(int hour)
//		 : _hour(hour)
//		 {
//		 cout << "Time()" << endl;
//		 }
//private:
//	 int _hour;
//	 };
//class Date
//{
// public:
//	 Date(int& x, int year = 1, int month = 1, int day = 1)
//		 : _year(year)
//		 , _month(month)
//		 , _day(day)
//		 , _t(12)
//		 , _ref(x)
//		 , _n(1)
//		 , _ptr((int*)malloc(12))
//	 {
//		 if (_ptr == nullptr)
//		 {
//			 perror("malloc fail");
//		 }
//		 else
//		 {
//			 memset(_ptr, 0, 12);
//		 }
//	 }
//		 void Print() const
//		 {
//		 cout << _year << "-" << _month << "-" << _day << endl;
//		 }
//private:
//	 int _year;
//	 int _month;
//	 int _day;
//	 Time _t; // 没有默认构造
//	 int& _ref; // 引⽤
//	 const int _n; // const
//	 int* _ptr;
//};
//int main()
//{
//
//	return 0;
//}



//class A
//{
//public:
//	A()
//	{
//		++_scount;
//	}
//	A(const A& t)
//	{
//		++_scount;
//	}
//	~A()
//	{
//		--_scount;
//	}
//	static int GetACount()
//	{
//		return _scount;
//	}
//private:
//	// 类⾥⾯声明
//	static int _scount;
//};
//// 类外⾯初始化
//int A::_scount = 0;
//int main()
//{
//	 cout << A::GetACount() << endl;
//	 A a1, a2;
//	 A a3(a1);
//	 cout << A::GetACount() << endl;
//	 cout << a1.GetACount() << endl;
//		// 编译报错：error C2248: “A::_scount”: ⽆法访问 private 成员(在“A”类中声明)
//		//cout << A::_scount << endl;
//		 return 0;
// }



//class B;
//class A
//{
//	// 友元声明
//	friend void func(const A& aa, const B& bb);
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//class B
//{
//	// 友元声明
//	friend void func(const A& aa, const B& bb);
//private:
//	int _b1 = 3;
//	int _b2 = 4;
//};
//void func(const A& aa, const B& bb)
//{
//	cout << aa._a1 << endl;
//	cout << bb._b1 << endl;
//}
//
//int main()
//{
//	 A aa;
//	 B bb;
//	 func(aa, bb);
//		 return 0;
//}


//class A
//	 {
//	 // 友元声明
//		 friend class B;
//private:
//    int _a1 = 1;
//	 int _a2 = 2;
//	 };
//
//class B
// {
// public:
//     void func1(const A & aa)
//		 {
//		 cout << aa._a1 << endl;
//		 cout << _b1 << endl;
//		 }
//	 void func2(const A & aa)
//		 {
//		 cout << aa._a2 << endl;
//		 cout << _b2 << endl;
//		 }
// private:
//	 int _b1 = 3;
//	 int _b2 = 4;
//	 };
//int main()
//{
//	A aa;
//	B bb;
//	bb.func1(aa);
//	bb.func1(aa);
//	return 0;
//}


//class A
//{
//private:
//	static int _k;
//	int _h = 1;
//public:
//	class B // B默认就是A的友元
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << _k << endl; //OK
//			cout << a._h << endl; //OK
//		}
//		int _b1=1;
//	};
//};
//int A::_k = 1;
//int main()
//{
//	cout << sizeof(A) << endl;
//	A::B b;
//	A aa;
//	b.foo(aa);
//	return 0;
//}



class A
{
public:
	 A(int a = 0)
		 : _a(a)
		 {
		 cout << "A(int a)" << endl;
	 }
		 ~A()
		 {
		 cout << "~A()" << endl;
		 }
private:
	 int _a;
	 };
 class Solution {
 public:
	 int Sum_Solution(int n) {
		 //...
			 return n;
	}
};

 int main()
 {
	 A aa1;
		A();
	 A(1);
	 A aa2(2);
		 Solution().Sum_Solution(10);
		 return 0;
 }