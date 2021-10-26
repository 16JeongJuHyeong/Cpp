#include "header.h"

New_Class::New_Class(const char* str_)
{
	int len = strlen(str_);
	strData = new char[len + 1];
	strcpy(strData, str_);
	cout << "const char 생성자 호출했고 strData의 주소값은 " << &strData << endl;
}

New_Class::~New_Class()
{
	cout << GetStr() << "데이터 해제" << endl;
	delete[] strData;
}

New_Class::New_Class(const New_Class& input_)
{
	int len = strlen(input_.strData)+1;
	strData = new char[len];
	cout << "복사 생성자 발생, strData의 주소는 " << &strData << endl;
	strcpy(strData, input_.strData);
}