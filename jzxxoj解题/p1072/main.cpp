#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

/*˼·�����������߶ε����˶��ڶ˵��ϡ��������ѭ��ö�ټ��ɡ�*/

int main()
{
	int n, a[100], min = 999999;

	scanf("%d", &n);

	for (int i = 1;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	a[0] = 0;

	sort(a, a + n); /*��������ݿ��ܲ�������ģ���ʱ��������Ҫ����*/

	for (int i = 1;i < n - 4;i++)
	{
		for (int j = i + 2;j < n - 2;j++)
		{
			int x = a[i] + (a[j] - a[i + 1]) + (a[n - 1] - a[j + 1]);
			if (x < min)
			{
				min = x;
			}
		}
	}

	printf("%d\n", min);

	getchar();
	getchar();

	return 0;
}