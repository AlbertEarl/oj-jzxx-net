#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��ö�١�

int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
			ans++;

	printf("%d\n", ans);

	//�������
	getchar();
	getchar();

	return 0;
}