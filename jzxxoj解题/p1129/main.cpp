#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*˼·�������ɴ�ӡ��*/

int main()
{
	int n;
	scanf("%d", &n);
	//��1��
	for (int i = 1;i < n;i++)
	{
		printf(" ");
	}
	for (int i = 0;i < n;i++)
	{
		printf("*");
	}
	printf("\n");
	//��2~2n-2��
	for (int i = 2;i <= (2 * n) - 2;i++)
	{
		for (int j = 1;j <= abs(n - i);j++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 1;j <= (2 * n + 1) - 2 * (abs(n - i)) + (n - 5);j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	//���һ��
	for (int i = 1;i < n;i++)
	{
		printf(" ");
	}
	for (int i = 0;i < n;i++)
	{
		printf("*");
	}
	printf("\n");

	getchar();
	getchar();

	return 0;
}