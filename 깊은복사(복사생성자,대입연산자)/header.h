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
	New_Class() :strData(NULL) {}
	New_Class(const char* str_);
	~New_Class();
	char* GetStr() const { return strData; };
	New_Class(const New_Class& input_);
	New_Class& operator=(const New_Class& input_) //참조자 형태 쓴 이유?->return할 때 임시객체 안 쓰게 하기 위함
		//임시객체 쓰면 임시객체에 또 생성자 과정 적용되는데 굳이 그럴 필요가 없음
	{
		delete[] strData; // 대입할 때 왜 기존의 동적할당 변수를 해제할까?->입력된 객체의 데이터(변수)를 그대로 받을때
		//문자 사이즈도 다를거니까 새로 데이터 할당받을 필요가 있음. 근데 그렇다고 기존의 데이터는 두고 새로 할당하면
		//기존 데이터는 프로그램 끝날 때까지 메모리 공간 차지->낭비
		int len = strlen(input_.strData) + 1;
		strData = new char[len];
		cout << "operator= 작동했고 strData의 주소값은 " << &strData << endl;
		strcpy(strData, input_.strData);
		return *this;
	}
};