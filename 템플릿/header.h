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

template<typename T> //혹은 class T
T getArraySum(const T arr[], int n)
{
	T sum = 0; // 임의의 자료형에 대해 기능을 수행하기 위해 자료형을 T라는, 모호한 타입 사용한다고 보면 됨
	for (int i = 0; i < n; i++)
		sum += arr[i]; //어떤 자료형이든 하고자하는 기능은 같음
	return sum; //값 반환, 이때도 어떤 타입을 반환할지 모르기 때문에 반환형을 T로 뒀던 거임
}

template<> //특정 템플릿의 특수화 표현
string getArraySum(const string arr[], int n) //템플릿의 특정 자료형(여기선 string)은 다른 기능을 수행하려고 함(특별하다는 뜻에서 '특수화')
{
	string sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += ' ' + arr[i];
	return sum;
}


template<class T> // 템플릿 인수
class Vector2
{
private:
	T x, y;
public:
	Vector2() : x(0), y(0) {}
	Vector2(T x, T y) : x(x), y(y) {}
	T GetX() const { return x; }
	T GetY() const { return y; } //반환할 값의 자료형도 템플릿
};