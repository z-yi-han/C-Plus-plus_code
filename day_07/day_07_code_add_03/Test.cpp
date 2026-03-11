#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"
namespace han
{
	void test_string1()
	{
		string s1;
		string s2("hello world");
		std::cout << s1.c_str() << std::endl;
		std::cout << s2.c_str() << std::endl;

		for (size_t i = 0; i < s2.size(); i++)
		{
			s2[i] += 2;
		}

		std::cout << s2.c_str() << std::endl;

		for (auto e : s2)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;

		string::iterator it = s2.begin();
		while (it != s2.end())
		{
			//*it += 2;
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	void test_string2()
	{
		string s1("hello world ");
		s1 += 'x';
		s1 += '#';
		std::cout << s1.c_str() << std::endl;
		s1 += "I am handsome";
		std::cout << s1.c_str() << std::endl;
		s1.insert(5, '$');
		std::cout << s1.c_str() << std::endl;

		s1.insert(0, '$');
		std::cout << s1.c_str() << std::endl;

		string s2("hello world");
		std::cout << s2.c_str() << std::endl;

		s2.insert(5, "$$$");
		std::cout << s2.c_str() << std::endl;

		s2.insert(0, "$$$&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
		std::cout << s2.c_str() << std::endl;
	}
}
int main()
{
	//han::test_string1();
	han::test_string2();
	return 0;
}