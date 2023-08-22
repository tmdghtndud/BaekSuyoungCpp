#include <iostream>
#include <time.h>
using namespace std;

enum eRockScissorPaper {
	ROCK,	// 무조건 0부터 시작
	SCISSOR,
	PAPER,
	END
};

enum eErrorCode
{
	ErrPlayerNoGold = -17001,
	ErrPlayerNoCrystal = -17002,
};

void main()
{
	//enum << 가위바위보 예제로 보면 좀 이해가 쉬운
	//사용자정의 자료형종류
	//enum, struct, class

	//열거형 자료형
	//정수형에 이름을 붙여준다.

	//enum 사용법
	//enum eRockScissorPaper { ROCK, SCISSOR, PAPER, END };
	int myHand1 = eRockScissorPaper::ROCK;

	//enum은 switch문이랑 연동되어서 많이 사용한다.
	//

	//일단 가위바위보 만들기.
	int myHand = 0;
	int comHand = rand() % eRockScissorPaper::END;

	cout << "내 핸드를 뽑아주세요. (0:바위, 1:가위, 2:보)" << endl;
	cin >> myHand;
	
	cout << "내가 낸 것 : " << endl;
	switch (myHand)
	{
	case eRockScissorPaper::ROCK:
		cout << "바위";
		break;
	case eRockScissorPaper::SCISSOR:
		cout << "가위";
		break;
	case eRockScissorPaper::PAPER:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "상대가 낸 것 : " << endl;
	switch (comHand)
	{
	case eRockScissorPaper::ROCK:
		cout << "바위";
		break;
	case eRockScissorPaper::SCISSOR:
		cout << "가위";
		break;
	case eRockScissorPaper::PAPER:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;


	if (comHand == myHand)
	{
		cout << "비김" << endl;
	}
	else if (comHand == ROCK && myHand == SCISSOR ||
		comHand == SCISSOR && myHand == PAPER ||
		comHand == PAPER && myHand == ROCK)
	{
		cout << "패배" << endl;
	}
	else
	{
		cout << "승리" << endl;
	}
}