#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*˼·��˫��ѭ���㶨���ո������ǺŸ�����Ҫ���ơ�*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		for (int j = 1;j <= n - i - 1;j++)
			printf(" ");
		for (int j = 0;j < i * 2 + 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}