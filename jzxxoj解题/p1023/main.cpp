#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·����p1021��
int main()
{
	int n;
	scanf("%d", &n);
	int ans = 1;

	for (int i = 1;i <= n;i++) //ѭ��
	{
		ans *= i;
	}

	printf("%d\n", ans);
	//�������
	getchar();
	getchar();

	return 0;
}