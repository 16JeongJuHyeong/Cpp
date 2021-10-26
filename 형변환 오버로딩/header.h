#pragma once
#pragma warning(disable: 4267)
#pragma warning(disable: 26451)
#pragma warning(disable: 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

class New_Class
{
private:
	char* strData;
public:
	New_Class() :strData(NULL) { cout << "기본 생성자 호출" << endl; }
	New_Class(const char* str_)
	{
		int len = strlen(str_);
		strData = new char[len + 1];
		strcpy(strData, str_);
		cout << "const char 생성자 호출했고 strData의 내용은 " << strData << endl;
	}

	New_Class(const New_Class& str_)
	{
		int len = strlen(str_.strData) + 1;
		strData = new char[len];
		strcpy(strData, str_.strData);
		cout << "복사 생성자(Const New_Class 호출했고 strData의 내용은 " << strData << endl;
	}

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
		cout << "operator= 그리고 매개변수는 rvalue" << endl;
		strData = input_.strData;
		input_.strData = NULL;
		return *this;
	}

	~New_Class()
	{
		delete strData;
	}

	New_Class(New_Class&& input_) noexcept //자료형&& : rvalue
	{
		cout << "rvalue 참조자 호출, "<< input_.strData << endl;
		strData = input_.strData;
		input_.strData = NULL;
		//임시 객체~>대입까지 복사 생성자를 계속 
	}

	operator char*()
	{
		return GetStr();
	}

	char* GetStr() const { return strData; };


};
New_Class GetName()
{
	New_Class res("JJS");
	return res;
}

void Plus_String(const char* input)
{
	cout << input << ". you said that right?" << endl;
}