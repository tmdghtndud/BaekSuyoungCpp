#include <iostream>

using namespace std;

struct Unit
{
	float Hp;
	float Damage;
};

void main()
{
	//����1.
	//���ھ߱�
	// ��ǻ�Ͱ� ������ ���ڸ� �̾ƿ�
	// �̶� ���ڰ� ��ġ�� �ʴ� 4�ڸ� ����
	// 3751 (o) , 4742 (x) (4�� ��ħ)
	// ������� ���ѹݺ�
	// ����ڰ� ��ġ�� �ʴ� 4�ڸ� ���ڸ� �Է��մϴ�.
	// ������ 3751 �϶� ����.
	// ����ڰ� 3507 �� �Է��ϸ�
	// 1Strike 2Ball ���!
	// ��������� 4strike�� ���� ����




	// ����ü
	//�ڷ���
	//����� ���� �ڷ���

	//�ڷ����� ����
	//1. �⺻�ڷ���
	//2. ����������ڷ���

	// 1. �⺻�ڷ���
	// C++���� �⺻������ �������ִ� �ڷ���
	// int, float, bool, char

	// 2. ��������� �ڷ���
	// ����ڰ� ���� �ǹ̸� �����ϰ� ������ �����Ͽ� ����ϴ� �ڷ���
	// struct, enum, class



	//������ Hp, Damage�� �������Ѵ�.
	float Hp;
	float Damage;

	Unit monster;
	//float monsterHp
	//float monsterDamage

	//���� 
	monster.Hp = 100;
	monster.Damage = 23;

	//�����ʱ�ȭ
	Unit slime = { 100, 10 };
	cout << "Slime Hp : " << slime.Hp << endl;
	cout << "Slime Damage : " << slime.Damage << endl;

	Unit hero = { 200, 7 };
	cout << "Hero Hp : " << hero.Hp << endl;
	cout << "Hero Damage : " << hero.Damage << endl;

	//�������� ����θ� �Ѵ� ������
	//����ΰ� �������� �Ѵ� ������.
	//���߿� �ϳ��� ���������� �ݺ�.

	while (true)
	{
		cout << "Hero Hp : " << hero.Hp << endl;
		cout << "Slime Hp : " << slime.Hp << endl;
		hero.Hp -= slime.Damage;
		slime.Hp -= hero.Damage;

		if (hero.Hp <= 0 || slime.Hp <= 0)
		{
			break;
		}
	}
	
}