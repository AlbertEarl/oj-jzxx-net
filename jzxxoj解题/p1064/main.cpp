#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·���ж�����ַ����Ƿ��ǻ����ַ������ǵ�����ַ����۰룬
����������ȡ�
*/

int main()
{
	char str[1024] = { 0 }, c = 0;
	int i = -1;
	
	scanf("%c", &c);
	while (c != '\n')
	{
		i++;
		str[i] = c;
		scanf("%c", &c);
	}

	if (i == -1)
	{
		printf("%d\n", 0);
		getchar();
		getchar();
		return 0;
	}

	bool f = true;

	while (f)
	{
		if (i % 2 == 0)
		{
			f = false;
		}

		if (i == 0)
		{
			printf("%d\n", 1);
			getchar();
			getchar();
			return 0;
		}
		for (int j = 0;j < ((i+1) / 2);j++)
		{
			if (str[j] != str[i - j])
			{
				f = false;
				break;
			}
		}
		if (f)
		{
			i = i / 2;
		}
		else {
			printf("%d\n", i + 1);
		}
	}

	getchar();
	getchar();

	return 0;
}