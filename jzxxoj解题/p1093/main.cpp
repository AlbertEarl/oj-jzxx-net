#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
/*˼·����ö�١�*/

bool is_prime(int x) //�ж�����
{
	if (x == 1)
		return false;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	for (int i = 1000;i < 3000;i++)
	{
		int ts = i;
		if (is_prime(ts))
		{
			ts = ts % 1000;
			if (is_prime(ts))
			{
				ts = ts % 100;
				if (is_prime(ts))
				{
					ts = ts % 10;
					if (is_prime(ts))
					{
						printf("%d\n", i);

					}
				}
			}
		}
	}

	getchar();
	getchar();

	return 0;
}