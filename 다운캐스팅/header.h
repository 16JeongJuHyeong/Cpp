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

class Weapon
{
public:
	Weapon();
	Weapon(int power);
	virtual void Use();
	void GetPower();
	int Weapon_price = 5;

protected:
	int power;
};

class Sword : public Weapon
{
public:
	Sword();
	Sword(int power);
	void Use();
	void Block();
	int Sword_price = 10;

private:
	void Swing();
};


class Bow : public Weapon
{
public:
	Bow();
	Bow(int power);
	void Use();

	int Bow_price = 15;

private:
	void Shot();
};