#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��ö�ٰ�λʮλ��λ����N���ֹͣ��
int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	bool f = true;
	for (int b = 1;b < 10 && f;b++)
	{
		for (int t = 0;t < 10 && f;t++)
		{
			for (int o = 0;o < 10 && f;o++)
			{
				if (b * 100 + t * 10 + o > n)
				{
					f = !f;
					break; //���һ��Ҫ�ӣ����ӵĻ�����������Ϊ370ʱ����Ǵ�ġ�
				}
				if ((b * 100 + t * 10 + o) == (b*b*b + t*t*t + o*o*o))
				{
					//printf("%d\n", b * 100 + t * 10 + o); //��Щ����Ҫ���������Debugʹ��
					ans++;
				}
			}
		}
	}

	printf("%d\n", ans);

	//�������
	getchar();
	getchar();

	return 0;
}