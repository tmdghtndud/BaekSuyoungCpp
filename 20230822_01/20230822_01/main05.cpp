#include <iostream>
#include <time.h>
using namespace std;

enum eRockScissorPaper {
	ROCK,	// ������ 0���� ����
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
	//enum << ���������� ������ ���� �� ���ذ� ����
	//��������� �ڷ�������
	//enum, struct, class

	//������ �ڷ���
	//�������� �̸��� �ٿ��ش�.

	//enum ����
	//enum eRockScissorPaper { ROCK, SCISSOR, PAPER, END };
	int myHand1 = eRockScissorPaper::ROCK;

	//enum�� switch���̶� �����Ǿ ���� ����Ѵ�.
	//

	//�ϴ� ���������� �����.
	int myHand = 0;
	int comHand = rand() % eRockScissorPaper::END;

	cout << "�� �ڵ带 �̾��ּ���. (0:����, 1:����, 2:��)" << endl;
	cin >> myHand;
	
	cout << "���� �� �� : " << endl;
	switch (myHand)
	{
	case eRockScissorPaper::ROCK:
		cout << "����";
		break;
	case eRockScissorPaper::SCISSOR:
		cout << "����";
		break;
	case eRockScissorPaper::PAPER:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "��밡 �� �� : " << endl;
	switch (comHand)
	{
	case eRockScissorPaper::ROCK:
		cout << "����";
		break;
	case eRockScissorPaper::SCISSOR:
		cout << "����";
		break;
	case eRockScissorPaper::PAPER:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;


	if (comHand == myHand)
	{
		cout << "���" << endl;
	}
	else if (comHand == ROCK && myHand == SCISSOR ||
		comHand == SCISSOR && myHand == PAPER ||
		comHand == PAPER && myHand == ROCK)
	{
		cout << "�й�" << endl;
	}
	else
	{
		cout << "�¸�" << endl;
	}
}