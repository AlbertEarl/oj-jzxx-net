#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·������ͬ�ඨ��ÿ�γ˻��������%100*/

int main()
{
	int x = 1;
	for (int i = 0;i < 1992;i++)
	{
		x *= 1992;
		x %= 100;
	}

	printf("%d\n", x);

	getchar();

	return 0;
}