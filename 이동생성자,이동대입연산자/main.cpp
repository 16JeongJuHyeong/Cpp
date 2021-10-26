#include "header.h"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	New_Class myClass("JJH"); //const char형 생성자 사용
	myClass = GetName(); //GetName함수 안에서 const char형 생성자 사용
	//return 값(rvalue)을 임시객체에 rvalue 복사 생성자로 저장
	//myClass에 이 rvalue값을 대입 연산자(rvalue)로 저장
	cout << myClass.GetStr();
    return 0;
}