#include <iostream>

class Character
{
public:
	virtual void Attack() = 0;		// 순수 가상함수를 이용한 "추상 클래스"
};

class Warrior : public Character
{
public:
	//void Attack()
	//{
	//	std::cout << "전사는 칼을 휘둘렀다" << std::endl;
	//}
};

int main()
{
	Character c1;		// 부모 클래스는 함수가 없음 = 실존할 수 없음 (추상적)
	c1.Attack();		// 그래서 인스턴싱이 안된다!

	Warrior w1;			// 오버라이딩이 강제가 됨!
	w1.Attack();		// 그래서 오버라이딩된 함수가 없기에 오류 발생

	Character* p = &w1;
	p->Attack();
}