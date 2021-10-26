#include <iostream>
#include <stack>
#include <vector>
#include "header.h"
using namespace std;


int main()
{
	New_Class class5 = "HETT";
	Plus_String(class5);
	//클래스 자료형에서 기본자료형으로는 묵시적 변환이 이뤄지지 않음->자료형 변환도 하나의 연산자.
	//이를 직접 정의해주자 ( operator char*() )

	//cout << class1.GetStr();

	return 0;
}