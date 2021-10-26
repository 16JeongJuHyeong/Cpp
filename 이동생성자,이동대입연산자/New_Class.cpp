#include "header.h"

New_Class::New_Class() :strData(NULL) { cout << "기본 생성자 호출" << endl; }
New_Class::New_Class(const char* str_)
{
	int len = strlen(str_);
	strData = new char[len + 1];
	strcpy(strData, str_);
	cout << "const char 생성자 호출했고 strData의 내용은 " << strData << endl;
}
New_Class::New_Class(const New_Class& str_)
{
	int len = strlen(str_.strData) + 1;
	strData = new char[len];
	strcpy(strData, str_.strData);
	cout << "복사 생성자(Const New_Class 호출했고 strData의 내용은 " << strData << endl;
}
New_Class::~New_Class()
{
	cout << "소멸자 호출" << endl;
	delete strData;
}
New_Class::New_Class(New_Class&& input_) noexcept //자료형&& : rvalue
{
	cout << "rvalue 참조자 호출, " << input_.strData << endl;
	strData = input_.strData;
	input_.strData = NULL;
	//임시 객체~>대입까지 복사 생성자를 계속 
}

New_Class GetName()
{
	// New_Class에서 사용할 기능은 아니고, New_Class형을 반환하려고 하는거
	New_Class res("JJS");
	return res;
}