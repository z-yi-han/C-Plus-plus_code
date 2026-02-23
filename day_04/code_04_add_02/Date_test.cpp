#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void TestDate1()
{
	Date d1(2024, 7, 12);
	Date d2 = d1 + 100;
	//Date d3(d1 + 100);
	d1.Print();
	d2.Print();

	//d1 += 100;
	//d1.Print();

	d1 += 30000;
	d1.Print();
}

void TestDate2()
{
	/*Date d1(2024, 7, 13);
	d1 -= 30000;
	d1.Print();*/

	Date d1(2024, 7, 13);
	Date ret1 = d1++;
	ret1.Print();
	d1.Print();

	Date d2(2024, 7, 13);
	Date ret2 = ++d2;
	ret2.Print();
	d2.Print();
}

void TestDate3()
{
	Date d1(2024, 7, 12);
	d1 += -100;
	d1.Print();

	d1 -= -100;
	d1.Print();
}

void TestDate4()
{
	Date d1(2034, 10, 1);
	Date d2(2024, 6, 31);

	cout << d1 - d2 << endl;
}

void TestDate5()
{
	Date d1, d2;
	cin >> d1 >> d2;
	cout << d1 << d2;

	cout << d1 - d2 << endl;

	//cout << d1;
	//operator<<(cout, d1);

	//cout << d1 << d2;

	// µ¹·´Ììî¸
	//d1 << cout;
	//d1.operator<<(cout);
}

void TestDate6()
{
	const Date d1(2024, 7, 13);
	d1.Print();

	Date d2(2024, 7, 13);
	d2.Print();

	cout << &d1 << endl;
	cout << &d2 << endl;
}

int main()
{
	TestDate6();

	return 0;
}