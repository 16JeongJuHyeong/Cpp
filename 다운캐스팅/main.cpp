#include "header.h"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


	Weapon* myWeapon1 = new Sword;  // Sword객체를 만들긴 했지만 포인터는 부모 포인터라서 myWeapon에서 Sword의 기능을 사용 못함
	Sword* mySword = (Sword*)myWeapon1;
	////하지만 형변환을 해주면 포인터가 Sword의 기능을 포함하게 되므로, myWeapon에 있는 객체(스워드) 의 기능들을 쓸 수 있게 됨
	mySword->Use();
	////실제 mySword가 가리키는 곳에 Sword객체가 있으므로 Sword 의 Use기능을 수행

	Weapon* myWeapon2 = new Weapon; //Weapon객체 생성. 자식 객체가 아니므로 자식 멤벼변수는 없음
	Bow* myBow = (Bow*)myWeapon2; //앞으로 포인터는 Bow객체의 범위(무기가격, 보우가격, 추가 함수)를 가짐
	cout << myBow->Bow_price << endl;
	//쓰레기 값. Bow 포인터는 해당 클래스의 함수를 '가리킬 수는 있지만' 실제 생성된 Weapon 객체에는 Bow의 기능을 담은
	//내용이 없음. 더군다나 Bow만 가진 기능을 포인터가 호출 시 그 주소는 이미 Weapon 메모리를 벗어난 상태이므로
	//초기화 되지 않은 값(쓰레기)가 있음
    return 0;



    return 0;
}