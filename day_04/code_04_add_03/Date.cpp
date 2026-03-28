#include"Date.h"
bool Date::CheckDate()
{
	 if (_month < 1 || _month > 12
		 || _day < 1 || _day > GetMonthDay(_year, _month))
		 {
		 return false;
		 }
	 else
		 {
		 return true;
		 }
 }


void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day;
}


Date:: Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	if (!CheckDate())
	{
		cout << "非法日期" << endl;
		Print();
	}
}



bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}
	return false;
}
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date::operator>(const Date& d)
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}
 


Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day += day;
	while (day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			_year --;
		}
		_day += GetMonthDay(_year, _month);

	}
	return *this;
}


Date Date::operator+(int day)
{
	Date tmp = *this;
	/*tmp._day += day;
	while (day > GetMonthDay(tmp._year, tmp._month))
	{
		_day -= GetMonthDay(tmp._year, tmp._month);
		++tmp._month;
		if (tmp._month == 13)
		{
			tmp._year++;
			tmp._month = 1;
		}
	}*/
	tmp += day;
	return tmp;
}
Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}



//d1++
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}
//++d1
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}


int Date::operator-(const Date& d)
{
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}
	return n * flag;
}


//void Date:: operator<<(ostream& out)
//{
//	out << _year << "年" << _month << "月" << _day<<"日"<<endl;
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
}
istream& operator>>(istream& in, Date& d)
{
	while (1)
	{
		cout << "轻易依次输入年月日>" << endl;
		in >> d._year >> d._month >> d._day;
		if (!d.CheckDate())
		{
			cout << "输入日期非法:";
			d.Print();
			cout << "重新输入" << endl;
		}
		else
		{
			break;
		}
	}

}