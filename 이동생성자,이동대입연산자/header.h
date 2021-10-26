#pragma once
#pragma warning(disable: 4267)
#pragma warning(disable: 26451)
#pragma warning(disable: 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class New_Class
{
private:
	char* strData;
public:
	New_Class();
	New_Class(const char* str_);
	New_Class(const New_Class& str_);

	New_Class& operator=(const New_Class& input_)
	{
		delete[] strData;
		int len = strlen(input_.strData) + 1;
		strData = new char[len];
		strcpy(strData, input_.strData);
		cout << "operator= 작동했고 strData의 내용은 " << strData << endl;
		return *this;
	}

	New_Class& operator=(New_Class&& input_) noexcept
	{
		cout << "operator= 그리고 매개변수는 &&" << endl;
		strData = input_.strData;
		input_.strData = NULL;
		return *this;
	}

	~New_Class();

	New_Class(New_Class&& input_) noexcept;
	char* GetStr() const { return strData; };
};

New_Class GetName();