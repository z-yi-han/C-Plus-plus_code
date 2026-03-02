#include<iostream>
using namespace std;
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
//
//int main()
//{
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//	cout << a1.GetACount() << endl;
//	// 编译报错：error C2248: “A::_scount”: ⽆法访问 private 成员(在“A”类中声明)
//	//cout << A::_scount << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//// 前置声明，否则A的友元函数声明编译器不认识B
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
//
//int main()
//{
//     A aa;
//	 B bb;
//	 func(aa, bb);
//	 return 0;
// }


//#include<iostream>
//using namespace std;
//class A
//{
//	// 友元声明
//		 friend class B;
//private:
//	 int _a1 = 1;
//	 int _a2 = 2;
//	 };
//
// class B
// {
// public:
//	 void func1(const A & aa)
//		 {
//		 cout << aa._a1 << endl;
//		 cout << _b1 << endl;
//		 }
//		 void func2(const A & aa)
//		 {
//		 cout << aa._a2 << endl;
//		 cout << _b2 << endl;
//		 }
//private:
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




//#include<iostream>
//using namespace std;
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
//	private:
//		int _b1;
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
	// 不能这么定义对象，因为编译器⽆法识别下⾯是⼀个函数声明，还是对象定义
	//A aa1();	
	// 但是我们可以这么定义匿名对象，匿名对象的特点不⽤取名字，
	// 但是他的⽣命周期只有这⼀⾏，我们可以看到下⼀⾏他就会⾃动调⽤析构函数
	A();
	 A(1);
	A aa2(2);
	// 匿名对象在这样场景下就很好⽤，当然还有⼀些其他使⽤场景，这个我们以后遇到了再说
	Solution().Sum_Solution(10);
	return 0;
 }