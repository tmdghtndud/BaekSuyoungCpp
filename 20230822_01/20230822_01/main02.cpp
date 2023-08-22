#include <iostream>

using namespace std;

void main()
{
	// 3. 1 ~ 1000까지의 숫자중에서 2의 배수와 3의 배수를 합한 값
	//	 그중에서 6의배수는 더하지 않음.

	// 뭐부터 뭐까지
	// =>for문이다

	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		//2의 배수이거나 3의배수면.
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