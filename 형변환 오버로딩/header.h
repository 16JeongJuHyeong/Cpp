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
	New_Class() :strData(NULL) { cout << "�⺻ ������ ȣ��" << endl; }
	New_Class(const char* str_)
	{
		int len = strlen(str_);
		strData = new char[len + 1];
		strcpy(strData, str_);
		cout << "const char ������ ȣ���߰� strData�� ������ " << strData << endl;
	}

	New_Class(const New_Class& str_)
	{
		int len = strlen(str_.strData) + 1;
		strData = new char[len];
		strcpy(strData, str_.strData);
		cout << "���� ������(Const New_Class ȣ���߰� strData�� ������ " << strData << endl;
	}

	New_Class& operator=(const New_Class& input_)
	{
		delete[] strData;
		int len = strlen(input_.strData) + 1;
		strData = new char[len];
		strcpy(strData, input_.strData);
		cout << "operator= �۵��߰� strData�� ������ " << strData << endl;
		return *this;
	}

	New_Class& operator=(New_Class&& input_) noexcept
	{
		cout << "operator= �׸��� �Ű������� rvalue" << endl;
		strData = input_.strData;
		input_.strData = NULL;
		return *this;
	}

	~New_Class()
	{
		delete strData;
	}

	New_Class(New_Class&& input_) noexcept //�ڷ���&& : rvalue
	{
		cout << "rvalue ������ ȣ��, "<< input_.strData << endl;
		strData = input_.strData;
		input_.strData = NULL;
		//�ӽ� ��ü~>���Ա��� ���� �����ڸ� ��� 
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