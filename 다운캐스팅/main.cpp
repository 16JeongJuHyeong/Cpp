#include "header.h"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


	Weapon* myWeapon1 = new Sword;  // Sword��ü�� ����� ������ �����ʹ� �θ� �����Ͷ� myWeapon���� Sword�� ����� ��� ����
	Sword* mySword = (Sword*)myWeapon1;
	////������ ����ȯ�� ���ָ� �����Ͱ� Sword�� ����� �����ϰ� �ǹǷ�, myWeapon�� �ִ� ��ü(������) �� ��ɵ��� �� �� �ְ� ��
	mySword->Use();
	////���� mySword�� ����Ű�� ���� Sword��ü�� �����Ƿ� Sword �� Use����� ����

	Weapon* myWeapon2 = new Weapon; //Weapon��ü ����. �ڽ� ��ü�� �ƴϹǷ� �ڽ� �⺭������ ����
	Bow* myBow = (Bow*)myWeapon2; //������ �����ʹ� Bow��ü�� ����(���Ⱑ��, ���찡��, �߰� �Լ�)�� ����
	cout << myBow->Bow_price << endl;
	//������ ��. Bow �����ʹ� �ش� Ŭ������ �Լ��� '����ų ���� ������' ���� ������ Weapon ��ü���� Bow�� ����� ����
	//������ ����. �����ٳ� Bow�� ���� ����� �����Ͱ� ȣ�� �� �� �ּҴ� �̹� Weapon �޸𸮸� ��� �����̹Ƿ�
	//�ʱ�ȭ ���� ���� ��(������)�� ����
    return 0;



    return 0;
}