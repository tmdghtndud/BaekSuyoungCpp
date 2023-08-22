#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));

	// �ζǹ�ȣ ������
	// 
	// 1~45������ ���� ���� �迭�� �����. lotto[45] ��� ��������.
	// �迭�� ���´�.
	//	 --> ���α׷����� �迭�� ���� ��
	//	 --> �迭 �ΰ��� �̾Ƽ� �� �ε������� ���� �ٲ۴�. x 100000�� �ݺ�
	// �տ����� 7���� ���.
	//  --> lotto[0], lotto[1], lotto[2], lotto[3] ... lotto[6]

	int lotto[45] = { 0, };
	//�迭 �ʱ�ȭ
	//�迭, for��
	//�迭�� ���� 99%�� for�� ����Ѵ�.

	//1. �����ϸ鼭 �ʱ�ȭ���ִ� ���
	//int lotto[45] = { 0, };
	//int lotto[45]{};
	//int lotto[45] = {};

	//2. �������Ŀ� �ٷ� �����ڵ�� �ʱ�ȭ ���ִ� ���
	// for�����

	//�ζǴ� 1~45������ ���ڸ� ������.
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}

	//�迭�� ���´�.
	//���� 2���� swap
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 45;
		int num2 = rand() % 45;

		int temp = lotto[num1];
		lotto[num1] = lotto[num2];
		lotto[num2] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << endl;
	}

}