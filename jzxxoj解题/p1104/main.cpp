#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*˼·��˫��ѭ���㶨��ǰ׺�ո�����Ҫ���ơ�*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		for (int j = 1;j <= i;j++)
			printf(" ");
		for (int j = 0;j < n;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}