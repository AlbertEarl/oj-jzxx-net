#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#define _SIZE 101

/*˼·��ɸ�������壺
������һ��bool�����������飬�տ�ʼ������Ϊ
true������ȫ����������Ȼ���һ��ѭ����i����2��ʼ��
��(int)sqrt(�����С)Ϊֹ��
����Ѿ��Ǻ�����ִ����һ��ѭ���������i����ʼ��
�����ı�����Ϊ������һֱ�굽�������и��౶��Ϊֹ���������С/i)
Ȼ�����ǿ��Է���bool��������ֵΪfalse�Ķ��Ǻ�����ֵΪ
true�Ķ���������
*/

int main()
{
	bool a[_SIZE];
	int i, j;
	for (i = 0;i < _SIZE;i++)
	{
		a[i] = true;
	}

	for (i = 2;i <= (int)sqrt(_SIZE - 1);i++) //ɸ��
	{
		if (!a[i]) continue;
		for (j = i;j <= (_SIZE - 1) / i;j++)
		{
			a[i*j] = 0;
		}

	}

	int t = 0;
	for (i = 2;i < _SIZE;i++)
	{
		if (a[i])
		{
			t++;
			if (t % 5 == 0)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}

	getchar();

	return 0;
}