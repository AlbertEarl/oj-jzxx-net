#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·������һ�����飬0��ʾ�Ѿ����߳�ȥ��1��ʾ����Ȧ�ڡ�
ÿ�μ������ۼӵ�ǰ����ֱ������������M���ѵ�ǰ�����㲢�����
*/

int main()
{
	int a[16], n, m, failure = 0, s = 0, subscript = 0;
	scanf("%d%d", &n, &m);

	for (int i = 1;i <= 15;i++)
	{
		a[i] = 1;
	}

	while (failure < n)
	{
		s = 0;
		while (s < m)
		{
			if (subscript == n)
			{
				subscript = 1;
			}
			else
			{
				++subscript;
			}
			s += a[subscript]; //�ۼ�
		}

		printf("%d\n", subscript);

		a[subscript] = 0; //��Ȧ

		failure++;
	}

	getchar();
	getchar();

	return 0;
}