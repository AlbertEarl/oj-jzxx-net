#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��ѭ����ֱ���������XΪֹ
int main()
{
	int limit, i;
	scanf("%d", &limit);
	double ans = 0;
	i = 0;
	while (ans <= limit)
	{
		i++;
		ans = ans + (double)((double)1 / (double)i);
	}

	printf("%d\n", i);

	getchar();
	getchar();

	return 0;
}