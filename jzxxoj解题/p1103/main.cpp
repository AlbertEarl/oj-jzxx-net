#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*˼·��˫��ѭ���㶨���ڶ���ѭ��������Ҫ���ơ�*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}