#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
/*˼·��ö�١�*/

bool is_prime(int x) //�ж�����
{
	if (x == 1 && x == 0)
		return true;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	for (int i = 100;i < 1000;i++)
	{
		int ts = i;
		if (!is_prime(ts))
		{
			ts = ts / 10;
			if (!is_prime(ts))
			{
				ts = ts / 10;
				if (!is_prime(ts))
				{
					printf("%d\n", i);
				}
			}
		}
	}

	getchar();
	getchar();

	return 0;
}