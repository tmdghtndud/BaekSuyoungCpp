#include <iostream>

using namespace std;

void main()
{
	// 3. 1 ~ 1000������ �����߿��� 2�� ����� 3�� ����� ���� ��
	//	 ���߿��� 6�ǹ���� ������ ����.

	// ������ ������
	// =>for���̴�

	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		//2�� ����̰ų� 3�ǹ����.
		if (i % 2 == 0 || i % 3 == 0)
		{
			if (i % 6 != 0)
			{
				sum += i;
			}
		}
	}

	cout << "sum : " << sum << endl;
}