#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*˼·����򵥵Ĵ�ӡͼ�Σ�˫��ѭ���㶨��*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
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