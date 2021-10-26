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
	New_Class& operator=(const New_Class& input_) //������ ���� �� ����?->return�� �� �ӽð�ü �� ���� �ϱ� ����
		//�ӽð�ü ���� �ӽð�ü�� �� ������ ���� ����Ǵµ� ���� �׷� �ʿ䰡 ����
	{
		delete[] strData; // ������ �� �� ������ �����Ҵ� ������ �����ұ�?->�Էµ� ��ü�� ������(����)�� �״�� ������
		//���� ����� �ٸ��Ŵϱ� ���� ������ �Ҵ���� �ʿ䰡 ����. �ٵ� �׷��ٰ� ������ �����ʹ� �ΰ� ���� �Ҵ��ϸ�
		//���� �����ʹ� ���α׷� ���� ������ �޸� ���� ����->����
		int len = strlen(input_.strData) + 1;
		strData = new char[len];
		cout << "operator= �۵��߰� strData�� �ּҰ��� " << &strData << endl;
		strcpy(strData, input_.strData);
		return *this;
	}
};