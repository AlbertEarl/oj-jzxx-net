#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*˼·:ʹ����ͨ�Ķ���ѭ�����ᳬʱ����ˣ�������Ҫһ��
��������¼���٣���ѭ������һ�ء�C++ջ�ϵĿռ��޷������С
��1000001�����飬���Ҫ��new������ռ䣬�ǵ�Ҫdelete��*/

int main()
{
	double max = -99999.99;
	int d = 0;
	int n, m;
	int* a = new int[1000001];

	scanf("%d%d", &n, &m);

	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		if (i < m)
		{
			d = d + a[i];
		}
		else {
			if (i == m)
			{
				d = d + a[i];
			}
			else {
				d = d + a[i] - a[i - m];
			}
			if (max < (d / (double)m))
			{
				max = d / (double)m;
			}
		}
	}

	delete[] a;

	printf("%.2lf\n", max);

	getchar();
	getchar();

	return 0;
}