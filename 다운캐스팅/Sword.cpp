#include "header.h"

Sword::Sword() : Weapon() { cout << "Sword(0) is called" << endl; }
Sword::Sword(int power) : Weapon(power) { cout << "Sword(int) is called" << endl; }
//���� �ڽ� Ŭ������ ��������� �ڽ� Ŭ������ �����ڷθ� �ʱ�ȭ�ϰ� �θ�� �θ� �����ڷ� �ʱ�ȭ �����ִ� �� ����
void Sword::Use()
{
	cout << "Sword::Use()" << endl;
	Swing();
}
void Sword::Block() { cout << "Sword::Block()" << endl; }
void Sword::Swing() { cout << "Swing Sword" << endl; }