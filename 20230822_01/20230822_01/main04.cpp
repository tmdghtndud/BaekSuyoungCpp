#include <iostream>

using namespace std;

struct Unit
{
	float Hp;
	float Damage;
};

void main()
{
	//숙제1.
	//숫자야구
	// 컴퓨터가 랜덤한 숫자를 뽑아요
	// 이때 숫자가 겹치지 않는 4자리 숫자
	// 3751 (o) , 4742 (x) (4가 겹침)
	// 여기부터 무한반복
	// 사용자가 겹치지 않는 4자리 숫자를 입력합니다.
	// 정답이 3751 일때 예시.
	// 사용자가 3507 을 입력하면
	// 1Strike 2Ball 출력!
	// 결과적으로 4strike면 게임 종료




	// 구조체
	//자료형
	//사용자 정의 자료형

	//자료형의 종류
	//1. 기본자료형
	//2. 사용자정의자료형

	// 1. 기본자료형
	// C++에서 기본적으로 제공해주는 자료형
	// int, float, bool, char

	// 2. 사용자정의 자료형
	// 사용자가 직접 의미를 정의하고 내용을 정의하여 사용하는 자료형
	// struct, enum, class



	//몬스터의 Hp, Damage를 만들어야한다.
	float Hp;
	float Damage;

	Unit monster;
	//float monsterHp
	//float monsterDamage

	//사용법 
	monster.Hp = 100;
	monster.Damage = 23;

	//변수초기화
	Unit slime = { 100, 10 };
	cout << "Slime Hp : " << slime.Hp << endl;
	cout << "Slime Damage : " << slime.Damage << endl;

	Unit hero = { 200, 7 };
	cout << "Hero Hp : " << hero.Hp << endl;
	cout << "Hero Damage : " << hero.Damage << endl;

	//슬라임이 히어로를 한대 때리고
	//히어로가 슬라임을 한대 때린다.
	//둘중에 하나가 죽을때까지 반복.

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