#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·������p1020����������û�й�ʽ��ֱ��ѭ�����㼴�ɡ�

int main()
{
	int n;
	double ans = 0.0;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		ans = ans + (double)((double)1 / (double)i);
	}

	printf("%.3lf\n", ans);
	//�������
	getchar();
	getchar();

	return 0;
}