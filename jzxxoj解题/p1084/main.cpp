#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·��ö�ټ���ֻ�����ɡ�*/

int main()
{
	for (int i = 1;i <= 50;i++)
	{
		int t = 50 - i;
		if (i * 2 + t * 4 == 160)
		{
			printf("%d %d\n", i, t);

			getchar();
			getchar();

			return 0;
		}
	}

	getchar();
	getchar();

	return 0;
}