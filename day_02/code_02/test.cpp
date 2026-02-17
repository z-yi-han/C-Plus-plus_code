#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;
//int main()
//{
//		int a = 0;
//		// 引用：b和c是a的别名
//		int& b = a;
//		int& c = a;
//	
//		// 也可以给别名b取别名，d相当于还是a的别名
//		int& d = b;
//		++d;
//
//		// 这里取地址我们看到是一样的
//		cout << &a << endl;
//		cout << &b << endl;
//		cout << &c << endl;
//		cout << &d << endl;
//	return 0;
//}
//void Swap(int& rx, int& ry)
//{
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//
//void Swap(int* px, int* py)
//{
//}
//int main()
//{
//		int x = 0, y = 1;
//		cout << x << " " << y << endl;
//		//Swap(&x, &y);
//	
//		Swap(x, y);
//		cout << x << " " << y << endl;
//}

//void func1(int &x)
//{
//	x++;
//}
////int& func2()
////{
////}
//int main()
//{
//	int a = 10;
//	// 编译报错：“ra”: 必须初始化引用
//	//int& ra;
//	func1(a);
//
//	int& b = a;
//	int& c = b;
//
//	int d = 20;
//	b = d;
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &d << endl;
//	return 0;
//}



//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void STInit(ST& rs, int n = 4)
//{
//	rs.a = (STDataType*)malloc(n * sizeof(STDataType));
//	rs.top = 0;
//	rs.capacity = n;
//}
//
//// 栈顶
//void STPush(ST& rs, STDataType x)
//{
//	//assert(ps);
//
//	// 满了， 扩容
//	if (rs.top == rs.capacity)
//	{
//		printf("扩容\n");
//		int newcapacity = rs.capacity == 0 ? 4 : rs.capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(rs.a, newcapacity *
//			sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//		rs.a = tmp;
//		rs.capacity = newcapacity;
//	}
//	rs.a[rs.top] = x;
//	rs.top++;
//}
//// int STTop(ST& rs)
//int& STTop(ST& rs)
//{
//	assert(rs.top > 0);
//	return rs.a[rs.top];
//}
////int main()
////{
////	// 调用全局的
////	ST st1;
////	STInit(st1);
////	STPush(st1, 1);
////	STPush(st1, 2);
////
////	cout << STTop(st1) << endl;
////
////	return 0;
////}
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode, * PNode;
//// {}*PNode   等价于  typedef struct ListNode* PNode;
//
////void ListPushBack(LTNode** phead, int x)
//void ListPushBack(LTNode*& phead, int x)
////void ListPushBack(PNode& phead, int x)
//{
//	PNode newnode = (PNode)malloc(sizeof(LTNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (phead == NULL)
//	{
//		phead = newnode;
//	}
//	else
//	{
//		//...
//	}
//}
//int main()
//{
//	//PNode plist = NULL;
//	LTNode* plist = NULL;
//	ListPushBack(plist, 1);
//	return 0;
//}

////辨析临时对象具有常性
//int main()
//{
//	const int a = 10;
//	const int& ra = a;//权限不可放大
//	int b = 20;
//	const int& rb = b;//权限可以缩小
//	b++;
//	//rb++;  报错
//	//int rd=a;//可读可写，只是一个拷贝，不存在权限问题
//	const int& rc = 30;//const引用可以给常量取别名
//	const int& rd= (a + b);//临时对象具有常性;
//	//int rd = (a + b);//正确
//	double d = 12.34;
//	int i = d;
//	const int& ri = d;//ri不能直接引用d
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	*p = 1;
//	int& ra = a;
//	ra = 2;
//
//	// 空引用
//	int* ptr = NULL;
//	int& rb = *ptr;
//	rb++;
//	const int& rc = a + 2;
//	return 0;
//}

//inline     
//// 实现一个ADD宏函数的常见问题
////#define ADD(int a, int b) return a + b;
////#define ADD(a, b) a + b;
////#define ADD(a, b) (a + b)
//// 正确的宏实现
//#define ADD(a, b) ((a) + (b))
//int main()
//{
//	int ret = ADD(1, 2); // int ret = ((1)+(2));
//	cout << ADD(1, 2) << endl;
//
//	cout << ADD(1, 2) * 5 << endl;
//
//	int x = 1, y = 2;
//	ADD(x & y, x | y); // -> (x&y+x|y)
//
//	return 0;
//}
//inline int Add(int x, int y)
//{
//	int ret = x + y;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	return ret;
//}
//int main()
//{
//	int ret = Add(1, 2);
//	cout << Add(1, 2) * 5 << endl;
//	cout << ret << endl;
//	f(10);
//	return 0;
//}

void f(int x)
{
	cout << "f(int x)" << endl;
}

void f(int* ptr)
{
	cout << "f(int* ptr)" << endl;
}

int main()
{
	f(0);
	f(NULL);
	//f((void*)0); C++不允许void*指针给到其他类型，只能强转

	f(nullptr);

	// C++
	void* p1 = NULL;
	int* p2 = (int*)p1;

	int* p2 = nullptr;
	//int i = nullptr; 

	return 0;
}