#include <iostream>

using namespace std;

void main()
{
	// 1. ���������� �ϳ����� Ÿ�Ӿ���
	// 2. ������
	// 3. 1 ~ 1000������ �����߿��� 2�� ����� 3�� ����� ���� ��
	//	 ���߿��� 6�ǹ���� ������ ����.
	// 4. �ζǹ�ȣ ������
	//		1~45���ڰ� ������, 7���� ���� ���ڸ� ����Ѵ� (�̋� ��ġ��ȵ�)


	// ������
	
	// => ��� �ݺ��Ѵ�.
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++) 
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	//�߰�����
	//1 x 1 = 1     2 x 1 = 2    3 x 1 = 3
	//1 x 2 = 2     2 x 2 = 4    3 x 2 = 6
	//. (����)
	//
	//4 x 1 = 4    5 x  1 = 5   6 x 1 = 6
	// (����)
	//
	//7 x 1 = 7    8 x  1 = 8   9 x 1 = 9

	//i => 1,2,3 �� ����, 4,5,6 �� ����, 7,8,9 ������ �����ϱ� ���� ����
	for (int i = 0; i < 3; i++)
	{
		//�� �ܸ��� 9�� �ݺ��ؼ� ��� ���� ����.
		for (int j = 0; j < 9; j++)
		{
			//���ٿ� 3�ܾ� ������ �ϱ����� ����
			for (int k = 0; k < 3; k++)
			{
				int num1 = k + 1 + (i * 3);
				int num2 = j + 1;
				int result = num1 * num2;
				cout << num1 << " x " << num2 << " = " << result << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}

}