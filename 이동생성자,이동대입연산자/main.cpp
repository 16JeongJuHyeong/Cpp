#include "header.h"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	New_Class myClass("JJH"); //const char�� ������ ���
	myClass = GetName(); //GetName�Լ� �ȿ��� const char�� ������ ���
	//return ��(rvalue)�� �ӽð�ü�� rvalue ���� �����ڷ� ����
	//myClass�� �� rvalue���� ���� ������(rvalue)�� ����
	cout << myClass.GetStr();
    return 0;
}