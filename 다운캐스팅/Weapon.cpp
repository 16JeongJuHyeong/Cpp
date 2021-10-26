#include "header.h"

Weapon::Weapon() : power(0) { cout << "Weapon(0) is called" << endl; }
Weapon::Weapon(int power) : power(power) { cout << "Weapon(int) is called" << endl; }
void Weapon::GetPower() { cout << power << endl; }
void Weapon::Use() { cout << "Weapon::Use() "; }