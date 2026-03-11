#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
#include<string>

namespace han
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}
		//string()
		//	://_str(nullptr)
		//	_str(new char[1]{'\0'})
		//	,_size(0)
		//	,_capacity(0)
		//{}
		string(const char* str = "")
		{
			_size = strlen(str);
			//capacity²»°üº¬\0
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		const char* c_str()
		{
			return _str;
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		size_t size() const
		{
			return _size;
		}
		size_t capacity() const
		{
			return _capacity;
		}
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}
		void reserve(size_t n);
		void push_back(char ch);
		void append(const char* str);
		string& operator+=(char ch);
		string& operator+=(const char* str);

		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* str);

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};
}
    