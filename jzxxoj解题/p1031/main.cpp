#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·������ѭ�����ֱ�ö�ٰ�λ��ʮλ����λ��
int main()
{
	int ans = 0;

	for (int h = 0;h < 10;h++) //hundred
	{
		for (int t = 0;t < 10;t++) //ten
		{
			for (int o = 0;o < 10;o++) //one
			{
				if (h == 3 || t == 3 || o == 3)
				{
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