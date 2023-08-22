#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));

	// 로또번호 생성기
	// 
	// 1~45까지의 값을 가진 배열을 만든다. lotto[45] 라고 정의힌다.
	// 배열을 섞는다.
	//	 --> 프로그램에서 배열을 섞는 것
	//	 --> 배열 두개를 뽑아서 두 인덱스끼리 값을 바꾼다. x 100000번 반복
	// 앞에부터 7개를 출력.
	//  --> lotto[0], lotto[1], lotto[2], lotto[3] ... lotto[6]

	int lotto[45] = { 0, };
	//배열 초기화
	//배열, for문
	//배열을 쓰면 99%는 for을 사용한다.

	//1. 생성하면서 초기화해주는 방법
	//int lotto[45] = { 0, };
	//int lotto[45]{};
	//int lotto[45] = {};

	//2. 생성이후에 바로 다음코드로 초기화 해주는 방법
	// for문사용

	//로또는 1~45까지의 숫자를 가진다.
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}

	//배열을 섞는다.
	//값을 2개를 swap
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