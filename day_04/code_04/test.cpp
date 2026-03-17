#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Date
//{
//public:
//	//// 1.无参构造函数
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
// // 
//
//	//// 2.带参构造函数
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	// 3.全缺省构造函数
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Date d2(2024, 7, 10);
//	d2.Print();
//
//	Date d3(2024);
//	d3.Print();
//
//	//Date func();
//	//func.Print();
//
//	return 0;
//}



//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	// ...
//
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//	// 编译器默认生成MyQueue的构造函数调用了Stack的构造，完成了两个成员的初始化
//	// 编译器默认生成MyQueue的析构函数调用了Stack的析构，释放的Stack内部的资源
//	// 显示写析构，也会自动调用Stack的析构
//	~MyQueue()
//	{
//		cout << "~MyQueue()" << endl;
//	}
//private:
//	Stack pushst;
//	Stack popst;
//	//int size;
//};
//
////int main()
////{
////	MyQueue mq;
////	//Stack st1;
////	//Stack st2;
////
////	return 0;




//// 用最新加了构造和析构的C++版本Stack实现
//bool isValid(const char* s) {
//	Stack st;
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')
//		{
//			st.Push(*s);
//		}
//		else
//		{
//			// 右括号比左括号多，数量匹配问题
//			if (st.Empty())
//			{
//				return false;
//			}
//			// 栈里面取左括号
//			char top = st.Top();
//			st.Pop();
//
//			// 顺序不匹配
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				return false;
//			}
//		}
//		++s;
//	}
//	// 栈为空，返回真，说明数量都匹配 左括号多，右括号少匹配问题
//	return st.Empty();
//}
//
//// 用之前C版本Stack实现
//bool isValid(const char* s) {
//	ST st;
//	STInit(&st);
//	while (*s)
//	{
//		// 左括号入栈
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			STPush(&st, *s);
//		}
//		else // 右括号取栈顶左括号尝试匹配
//		{
//			if (STEmpty(&st))
//			{
//				STDestroy(&st);
//				return false;
//			}
//			char top = STTop(&st);
//			// 不匹配
//			if ((top == '(' && *s != ')')
//				|| (top == '{' && *s != '}')
//				|| (top == '[' && *s != ']'))
//			{
//				STDestroy(&st);
//				return false;
//			}
//		}
//		++s;
//	}
//
//	// [[[[]]
//	// 栈不为空，说明左括号比右括号多，数量不匹配
//	bool ret = STEmpty(&st);
//	STDestroy(&st);
//
//	return ret;
//}
//
//int main()
//{
//	cout << isValid("[()][]") << endl;
//	cout << isValid("[(])[]") << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class Date {
//public:
//	Date(int year = 1,int month=1,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)//const保护实参不被改变
//	{
//		//if (d._day = _day)
//		//{
//		//	//........
//		//}
//		_year = d._year;
//		_month = d._month;
//			_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year<<" " << _month<<" " << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Func1(Date d){
//	cout << &d << endl;
//	d.Print();
//}
//
//
//int main()
//{
//	Date d1(2026, 2, 21);
//	d1.Print();
//	Func1(d1);
//	/*Date d2(d1);
//	d2.Print();*/
//	return 0;
//}



//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//
//
//	// st2(st1)
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//
//		// 需要对_a指向资源创建同样大的资源再拷贝值
//		_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//
//	void Push(STDataType x)
//	{
//		if (_top == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//				sizeof(STDataType));
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_top++] = x;
//
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//void func(Stack st)
//{
//
//}
////int main()
////{
////	Stack st1;
////	st1.Push(1);
////	st1.Push(2);
////
////	// Stack不显示实现拷贝构造，用自动生成的拷贝构造完成浅拷贝
////	// 会导致st1和st2里面的_a指针指向同一块资源，析构时会析构两次，程序崩溃
////	Stack st2(st1);
////
////	return 0;
////}


//// 两个Stack实现队列
//class MyQueue
//{
//public:
//private:
//	Stack pushst;
//	Stack popst;
//};
//
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//
//	func1(st1);
//
//	// Stack不显示实现拷贝构造，用自动生成的拷贝构造完成浅拷贝
//	// 会导致st1和st2里面的_a指针指向同一块资源，析构时会析构两次，程序崩溃
//	Stack st2(st1);
//	Stack st3 = st1;
//
//	MyQueue mq1;
//	// MyQueue自动生成的拷贝构造，会自动调用Stack拷贝构造完成pushst/popst
//	// 的拷贝，只要Stack拷贝构造自己实现了深拷贝，他就没问题
//	MyQueue mq2(mq1);
//
//	return 0;
//}

//Stack& func2()
//{
//	static Stack st;//不加static的话出了作用域st就不在了
//	return st;
//}
//int main()
//{
//	Stack ret = func2();
//}

