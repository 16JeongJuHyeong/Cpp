#include "header.h"

New_Class::New_Class(const char* str_)
{
	int len = strlen(str_);
	strData = new char[len + 1];
	strcpy(strData, str_);
	cout << "const char ������ ȣ���߰� strData�� �ּҰ��� " << &strData << endl;
}

New_Class::~New_Class()
{
	cout << GetStr() << "������ ����" << endl;
	delete[] strData;
}

New_Class::New_Class(const New_Class& input_)
{
	int len = strlen(input_.strData)+1;
	strData = new char[len];
	cout << "���� ������ �߻�, strData�� �ּҴ� " << &strData << endl;
	strcpy(strData, input_.strData);
}