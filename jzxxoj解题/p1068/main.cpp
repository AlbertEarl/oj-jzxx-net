#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·����� �����¼��� mod һ������һ�����������߼�����=0��
��ֱ�������������Ľ�������������������Ľ��+1��*/
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	if (n%m == 0)
	{
		printf("%d\n", n / m);
	}
	else {
		printf("%d\n", n / m + 1);
	}

	getchar();
	getchar();

	return 0;
}