#include "header.h"

New_Class::New_Class() :strData(NULL) { cout << "�⺻ ������ ȣ��" << endl; }
New_Class::New_Class(const char* str_)
{
	int len = strlen(str_);
	strData = new char[len + 1];
	strcpy(strData, str_);
	cout << "const char ������ ȣ���߰� strData�� ������ " << strData << endl;
}
New_Class::New_Class(const New_Class& str_)
{
	int len = strlen(str_.strData) + 1;
	strData = new char[len];
	strcpy(strData, str_.strData);
	cout << "���� ������(Const New_Class ȣ���߰� strData�� ������ " << strData << endl;
}
New_Class::~New_Class()
{
	cout << "�Ҹ��� ȣ��" << endl;
	delete strData;
}
New_Class::New_Class(New_Class&& input_) noexcept //�ڷ���&& : rvalue
{
	cout << "rvalue ������ ȣ��, " << input_.strData << endl;
	strData = input_.strData;
	input_.strData = NULL;
	//�ӽ� ��ü~>���Ա��� ���� �����ڸ� ��� 
}

New_Class GetName()
{
	// New_Class���� ����� ����� �ƴϰ�, New_Class���� ��ȯ�Ϸ��� �ϴ°�
	New_Class res("JJS");
	return res;
}