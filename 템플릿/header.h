#pragma once
#pragma warning(disable: 4267)
#pragma warning(disable: 26451)
#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <bitset>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stack>

using namespace std;

template<typename T> //Ȥ�� class T
T getArraySum(const T arr[], int n)
{
	T sum = 0; // ������ �ڷ����� ���� ����� �����ϱ� ���� �ڷ����� T���, ��ȣ�� Ÿ�� ����Ѵٰ� ���� ��
	for (int i = 0; i < n; i++)
		sum += arr[i]; //� �ڷ����̵� �ϰ����ϴ� ����� ����
	return sum; //�� ��ȯ, �̶��� � Ÿ���� ��ȯ���� �𸣱� ������ ��ȯ���� T�� �״� ����
}

template<> //Ư�� ���ø��� Ư��ȭ ǥ��
string getArraySum(const string arr[], int n) //���ø��� Ư�� �ڷ���(���⼱ string)�� �ٸ� ����� �����Ϸ��� ��(Ư���ϴٴ� �濡�� 'Ư��ȭ')
{
	string sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += ' ' + arr[i];
	return sum;
}


template<class T> // ���ø� �μ�
class Vector2
{
private:
	T x, y;
public:
	Vector2() : x(0), y(0) {}
	Vector2(T x, T y) : x(x), y(y) {}
	T GetX() const { return x; }
	T GetY() const { return y; } //��ȯ�� ���� �ڷ����� ���ø�
};