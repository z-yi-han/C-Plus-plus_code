#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void test_string1()
{
	string s("hello world");
	s.push_back(' ');
	s.push_back('x');
	s.append("yyyyy");
	cout<<s<<endl;
	s += " ";
	s += "999999999";
	cout << s << endl;
	s.insert(0,"zyh");
	cout << s << endl;
	s.insert(10, "zjb");
	cout << s << endl;
}
void test_string2()
{
	string s("hello world");
	s.erase(6, 1);
	cout << s << endl;
	//ͷɾ
	s.erase(0, 1);
	cout << s << endl;

	s.erase(s.begin());
	cout << s << endl;
	//βɾ
	s.erase(--s.end());
	cout << s << endl;
	
	s.erase(s.size() - 1.1);
	cout << s << endl;

	string ss("hello world");
	ss.erase(6);
	cout << ss <<endl;
}
void test_string3()
{
	string s("h e l l o w orld");
	s.replace(5, 4, "%%");
	cout << s << endl;
	size_t pos = s.find(' ');
	while (pos != string::npos)
	{
		s.replace(pos, 1, "%%");
		pos = s.find(' ',pos+2);
	}
	//cout << s << endl;
	string tmp;
	for (auto ch : s)
	{
		if (ch == ' ')
		{
			tmp += "%%";
		}
		else
			tmp += ch;
	}
	cout << tmp << endl;
	s = tmp;
	cout << s << endl;
}
void test_string4()
{
	string s("test.cpp");
	size_t pos = s.find('.');
	string suffix = s.substr(pos);
	cout << suffix << endl;

	std::string str("Please,replace the vowels in this sentence by asterisks.");
	std::size_t found = str.find_first_of("abcd");
	while (found != std::string::npos)
	{
		str[found] = '*';
		found = str.find_first_of("abcd", found + 1);
	}
	cout << str << endl;
}
void test_string5()
{
	string s1("hello");
	string s2 = s1 + "world";
	cout << s2 << endl;
	string s3 = "world" + s1;
	cout << s3 << endl;
}
int main()
{
	//test_string1();
	//test_string2(); 
	//test_string3();
	//test_string4();
	//test_string5();
	return 0;
}