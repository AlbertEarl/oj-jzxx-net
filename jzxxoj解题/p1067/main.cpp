#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·��ģ�⣬��λ�ֱ������*/
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i < 3;i++)
	{
		int ts = n;
		int js = 1;
		for (int j = 0;j <= 2 - i;j++)
		{
			ts = ts / 60;
			js = js * 60;
		}
		n = n - ts*js;
		printf("%d%d:", ts / 10, ts % 10);
	}

	printf("%d%d\n", n / 10, n % 10);

	getchar();
	getchar();

	return 0;
}