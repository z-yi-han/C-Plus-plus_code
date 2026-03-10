#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<string>
//void test_string5()
//{
//	string s("hello world");
//	s.push_back(' ');
//	s.push_back('x');
//	s.append("yyyyyy");
//	cout << s << endl;
//
//	s += " ";
//	s += "33333333333";
//	cout << s << endl;
//
//	s.insert(0,"hello world");
//	cout << s << endl;
//	s.insert(10, "zzz");
//	cout << s << endl;
//	s.insert(0,"p");
//	cout << s << endl;
//	char ch = 't';
//	s.insert(0, 1, ch);
//	s.insert(s.begin(), ch);
//
//}
//void test_string6()
//{
//	string s("hello world");
//	s.erase(6, 1);
//	// ͷɾ
//	s.erase(0, 1);
//	cout << s << endl;
//
//	s.erase(s.begin());
//	cout << s << endl;
//
//	// βɾ
//	s.erase(--s.end());
//	cout << s << endl;
//
//	s.erase(s.size() - 1, 1);
//	cout << s << endl;
//	
//	string ss("hello world");
//	ss.erase(6);
//	cout << ss << endl;
//
//	string sss("hello world");
//	/*sss.replace(5,1,"%%");
//	cout << sss << endl;*/
//	size_t pos=sss.find(' ');
//	while (pos != string::npos)
//	{
//		sss.replace(pos,1,"%%");
//		pos= sss.find(' ',pos+2);
//	}
//	string ssss("hello                  world");
//	string tmp;
//	for (auto ch : ssss)
//	{
//		if (ch == ' ')
//			tmp += "%%";
//		else
//			tmp += ch;
//	}
//	cout << tmp << endl;
//	/*ssss = tmp;*/
//	ssss.swap(tmp);
//	cout << ssss << endl;
//
//	string file;
//	cin >> file;
//	FILE* fout = fopen(file.c_str(), "r");
//	char ch = fgetc(fout);
//	while (ch != EOF)
//	{
//		cout << ch;
//		ch = fgetc(fout);
//	}
//	fclose(fout);
//}
//
//void SplitFilename(const std::string& str)
//{
//	std::cout << "Splitting: " << str << '\n';
//	std::size_t found = str.find_last_of("/\\");
//
//	std::cout << " path: " << str.substr(0, found) << '\n';
//	std::cout << " file: " << str.substr(found + 1) << '\n';
//}
//
//void test_string7()
//{
//	/*string s("test.cpp");
//	size_t pos = s.find('.');
//	string suffix = s.substr(pos);
//	cout << suffix << endl;*/
//	string s("test.cpp.zip");
//	size_t pos = s.rfind('.');
//	string suffix = s.substr(pos);
//	cout << suffix << endl;
//
//
//	std::string str("Please, replace the vowels in this sentence by asterisks.");
//	std::cout << str << '\n';
//
//	std::size_t found = str.find_first_not_of("abcdef");
//	while (found != std::string::npos)
//	{
//		str[found] = '*';
//		found = str.find_first_not_of("abcdef", found + 1);
//	}
//	std::cout << str << '\n';
//
//	std::string str1("/usr/bin/man");
//	std::string str2("c:\\winsows\\winhelp.exe");
//
//	SplitFilename(str1);
//	SplitFilename(str2);
//}
//void test_string8()
//{
//	string s1("hello");
//
//	string s2 = s1 + "world";
//	cout << s2 << endl;
//
//	string s3 = "world" + s1;
//	cout << s3 << endl;
//}
//int main()
//{
//	//test_string5();
//	//test_string6();
//	//test_string7();
//	test_string8();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	string str;
//	cin >> str;
//
//	string str1;
//	cin >> str1;
//
//	size_t pos = str.rfind(' ');
//	cout << str.size() - (pos + 1)<< endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;
#include<string>
int main()
{
	string str;
	getline(cin, str, '*');

	size_t pos = str.rfind(' ');
	cout << str.size() - (pos + 1) << endl;

	return 0;
}