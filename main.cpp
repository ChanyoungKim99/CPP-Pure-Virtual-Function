#include <iostream>

class Character
{
public:
	virtual void Attack() = 0;		// ���� �����Լ��� �̿��� "�߻� Ŭ����"
};

class Warrior : public Character
{
public:
	//void Attack()
	//{
	//	std::cout << "����� Į�� �ֵѷ���" << std::endl;
	//}
};

int main()
{
	Character c1;		// �θ� Ŭ������ �Լ��� ���� = ������ �� ���� (�߻���)
	c1.Attack();		// �׷��� �ν��Ͻ��� �ȵȴ�!

	Warrior w1;			// �������̵��� ������ ��!
	w1.Attack();		// �׷��� �������̵��� �Լ��� ���⿡ ���� �߻�

	Character* p = &w1;
	p->Attack();
}