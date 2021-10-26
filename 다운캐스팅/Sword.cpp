#include "header.h"

Sword::Sword() : Weapon() { cout << "Sword(0) is called" << endl; }
Sword::Sword(int power) : Weapon(power) { cout << "Sword(int) is called" << endl; }
//보통 자식 클래스의 멤버변수는 자식 클래스의 생성자로만 초기화하고 부모는 부모 생성자로 초기화 시켜주는 게 좋음
void Sword::Use()
{
	cout << "Sword::Use()" << endl;
	Swing();
}
void Sword::Block() { cout << "Sword::Block()" << endl; }
void Sword::Swing() { cout << "Swing Sword" << endl; }