#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hello world");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
// 命名冲突
//#include <stdio.h>
//#include <stdlib.h>
//int rand = 10;
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//namespace han
//{
//	int rand = 10;
//}
//int main()
//{
//	printf("%d\n", han::rand);//::是域作用限定符
//	printf("%p\n", rand);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>

// 域
//namespace han
//{
//	int rand = 10;
//
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//int main()
//{
//	//printf("%d\n", Add(1, 1));
//	printf("%d\n", han::Add(1, 1));
//	//struct Node p1;
//	struct han::Node p1;
//	return 0;
//}

// 域
//namespace han
//{
//	// 
//	namespace han01
//	{
//		int rand = 1;
//		int Add(int left, int right)
//		{
//		return left + right;
//		}
//	}
//
//	// 
//	namespace han02
//	{
//		int rand = 2;
//		int Add(int left, int right)
//		{
//			return (left + right) * 10;
//		}
//	}
//}
//
//int main()
//{
//	printf("%d\n", han::han01::rand);
//	printf("%d\n", han::han02::rand);
//	return 0;
//}
//#include"Stack.h"
//// 全局定义了一份单独的Stack
//typedef struct Stack
//{
//	int a[10];
//	int top;
//}ST;
//void STInit(ST* ps) {}
//void STPush(ST* ps, int x) {}
//
//int main()
//{
//	// 调用全局的
//	ST st1;
//	STInit(&st1);
//	STPush(&st1, 1);
//	STPush(&st1, 2);
//	printf("%d\n", sizeof(st1));
//
//	// 调用han namespace的
//	han::ST st2;
//	printf("%d\n", sizeof(st2));
//	han::STInit(&st2, 4);
//	han::STPush(&st2, 1);
//	han::STPush(&st2, 2);
//
//	return 0;
//}

//#include <stdio.h>//展开头文件，和展开命名空间不一样
//namespace han
//{
//	int a = 0;
//	int b = 1;
//}
//using namespace han;//全部展开
//using han::a;//某个成员展开
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", han  ::b);
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	/*int i = 1234;
//	int j = -1234;
//	std::cout << i << endl;
//	cout << i << endl;*/
//
//	int a = 0;
//	double b = 0.1;
//	char c = 'x';
//
//	cout << a << "             " << b << " " << c << "\n" << '\n' << endl;
//	std::cout << a << " " << b << " " << c << std::endl;
//
//	scanf("%d%lf", &a, &b);
//	printf("%d %lf\n", a, b);
//
//	// 可以自动识别变量的类型
//	/*cin >> a;
//	cin >> b >> c;*/
//	cin >>a>> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//
//	return 0;
//}

//int main()
//{
//	double d = 2.22222222;
//	printf("%.2lf\n", d);
//	cout << d << endl;
//	cout << &d << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//#include<iostream>
//using namespace std;
//void Func(int a=0)
//{
//	cout << a << endl;
//}
//// 全缺省
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//// 半缺省
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	Func(); // 没有传参时，使用参数的默认值
//	Func(10); // 传参时，使用指定的实参
//
//	Func1();
//	Func1(1);
//	Func1(1, 2);
//	Func1(1, 2, 3);
//
//	//Func2();
//	Func2(100);
//	Func2(100, 200);
//	Func2(100, 200, 300);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include"Stack.h"
//int main()
//{
//	han::ST s1;
//	han::STInit(&s1);
//
//	// 确定知道要插入1000个数据，初始化时一把开好，避免扩容
//	han::ST s2;
//	han::STInit(&s2, 1000);
//
//	for (size_t i = 0; i < 1000; i++)
//	{
//		han::STPush(&s2, i);
//	}
//
//	return 0;
//}


#include<iostream>
using namespace std;

// 1、参数类型不同
int Add(int left, int right)
{
	cout << "int Add(int left, int right)" << endl;
	return left + right;
}

double Add(double left, double right)
{
	cout << "double Add(double left, double right)" << endl;
	return left + right;
}

void Swap(int* px, int* py)
{}

void Swap(double* px, double* py)
{}

// 2、参数个数不同
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}

// 3、参数类型顺序不同(本质类型不同)
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}

void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}

// 下面两个函数构成重载
// f()但是调用时，会报错，存在歧义，编译器不知道调用谁
//void f1()
//{
//	cout << "f()" << endl;
//}
void f1(int a = 10)
{
	cout << "f(int a)" << endl;
}
//解决方法,此时不是函数重载
namespace han
{
	void f1()
	{
		cout << "f()" << endl;
	}
}
// //返回值不同不能作为重载条件，因为调用时也无法区分
//void fxx()
//{}
//
//int fxx()
//{
//	return 0;
//}
int main()
{
	Add(1, 2);
	Add(1.1, 2.2);

	f();
	f(1);

	f(1, 'x');
	f('x', 1);

	f1();
	han::f1();
	
	//fxx();

	return 0;
}
