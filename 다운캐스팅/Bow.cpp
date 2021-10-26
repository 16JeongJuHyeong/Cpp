#include "header.h"

Bow::Bow() : Weapon() { cout << "Bow(0) is called" << endl; }
Bow::Bow(int power) : Weapon(power) { cout << "Bow(int) is called" << endl; }
void Bow::Use()
{
	cout << "Bow::Use()" << endl;
	Shot();
}
void Bow::Shot() { cout << "Shot" << endl; }