#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class string
//{
//private:
//	char _buff[16];
//	char*  _str;
//
//	size_t _size;
//	size_t _capacity;
//};


void test_string2()
{
	string s2("hello world");
	/*string::iterator it = s2.begin();
	while (it != s2.end())
	{
		*it += 2;
		cout << *it ;
	}
	cout << endl;*/

	string::reverse_iterator rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit<<" ";
		++rit;
	}
	cout << endl;

	const string s3("hello world");
	string::const_iterator cit = s3.begin();
	while (cit != s3.end())
	{
		cout << *cit << " ";
		++cit;
	}
	cout << endl;

	string::const_reverse_iterator crit = s3.rbegin();
	while (crit != s3.rend())
	{
		cout << *crit << " ";
		++crit;
	}
	cout << endl;
}

void test_string3()
{
	string s3("hello world");
	cout << s3.length() << endl;
	cout << s3.size() << endl;

	cout << s3.max_size() << endl;

	cout << s3.capacity() << endl;



}


void TestPushBack()
{
	string s;
	s.reserve(100);//提前开空间避免扩容
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}


void test_string4()
{
	string s2("hello worldxxxxxxxxxxxxx");
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(20);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(28);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(40);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.clear();
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;
}


int main()
{
	///test_string2();
	//test_string3();
	//TestPushBack();
	test_string4();
	return 0;
}


//仅反转字符
//lass Solution{
//public:
//	bool isLetter(char ch)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		return true;
//		if (ch >= 'A' && ch <= 'Z')
//		return true;
//		return false;
//	}
//	string reverseOnlyLetters(string s) {
//		int left = 0,right = s.size() - 1;
//		while (left < right)
//		{
//			while (left < right && !isLetter(s[left]))
//			{
//				++left;
//			}
//			while (left < right && !isLetter(s[right]))
//			{
//				--right;
//			}
//			swap(s[left++],s[right--]);
//		}
//
//		return s;
//	}
//};




//字符串中第一个唯一字符
//lass Solution{
//public:
//	int firstUniqChar(string s) {
//		int count[26] = {0};
//		for (auto ch : s)
//		{
//			count[ch - 'a']++;
//		}
//		for (size_t i = 0; i < s.size(); ++i)
//		{
//			if (count[s[i] - 'a'] == 1)//[]中返回的是索引
//			return i;
//		}
//		return -1;
//	}
//};

//字符串相加
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		string str;
//		int end1 = num1.size() - 1, end2 = num2.size() - 1;
//		int next = 0;
//		while (end1 >= 0 || end2 >= 0)
//		{
//			int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//			int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//			end1--;
//			end2--;
//			int ret = val1 + val2 + next;
//			next = ret / 10;
//			ret = ret % 10;
//			str.insert(str.begin(), '0' + ret);
//		}
//		if (next == 1)
//			str.insert(str.begin(), '1');
//		return str;
//	}
//};