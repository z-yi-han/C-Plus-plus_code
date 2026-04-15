#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class string
//{
//public:
//	char& operator[](size_t i)
//	{
//		return _str[i];
//	}
//private:
//	char* _str;
//	size_t _size;
//	size_t _capacity;
//};


//int main()
//{
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//
//	cin >> s1;
//	cout << s1 << endl;
//
//	string s4(s2, 6, 5);
//	cout << s4 << endl;
//
//	s4[0] = 'x';
//	cout << s4 << endl;
//	return 0;
//}

void test_string1()
{
	string s1;
	string s2("hello world");

	cout << s1 << s2 << endl;

	s1[0] = 'x';
	cout << s1 << s2 << endl;

	/*for (size_t i = 0; i < s2.size(); i++)
	{
		cout << s2[i] <<" ";
	}
	cout << endl;*/


	/*string::iterator it = s2.begin();
	while (it !=s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;*/

	for (auto& ch : s2)//auto:自动迭代,自动判断结束
	{
		cout << ch << " ";
	} 
	cout << endl;
}



//#include<iostream>
//using namespace std;
//int func1()
//{
//	return 10;
//}
//// 不能做参数
//void func2(auto a)
//{
//}
//// 可以做返回值，但是建议谨慎使用
//auto func3()
//{
//	return 3;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	// 编译报错:rror C3531: “e”: 类型包含“auto”的符号必须具有初始值设定项
//	auto e;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	int x = 10;
//	auto y = &x;
//	auto* z = &x;
//	auto& m = x;
//	cout << typeid(x).name() << endl;
//	cout << typeid(y).name() << endl;
//	cout << typeid(z).name() << endl;
//	auto aa = 1, bb = 2;
//	// 编译报错：error C3538: 在声明符列表中，“auto”必须始终推导为同一类型
//	auto cc = 3, dd = 4.0;
//	// 编译报错：error C3318: “auto []”: 数组不能具有其中包含“auto”的元素类型
//	auto array[] = { 4, 5, 6 };
//	return 0;
//}



//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	// C++98的遍历
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2;
//	}
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		cout << array[i] << endl;
//	}
//	// C++11的遍历
//	for (auto& e : array)
//		e *= 2;
//	for (auto e : array)
//		cout << e << " " << endl;
//	string str("hello world");
//	for (auto ch : str)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//	return 0;
//}


int main()
{
	test_string1();
	return 0;
}