#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·��ѭ����ÿ�ζ���һ������Ȼ���жϡ�*/
int main()
{
	int n, m, x, ans = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &x);
		if (m > x) //�ж��ܲ��ܺȵ���ע�⣬���ڲ����ܺȵ���
		{
			ans++;
		}
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}