#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

/*˼·����һ���������������ơ�����һ�����ְ��������������true��
�����ԭ����false��Ѽ����ı�����Ϊ��ǰ�ַ�����Ӧ�������������
��������=����ǰ��*10+��ǰ�ַ�����Ӧ������������������ĸ����������false��
����������ա���¼��������������ʼλ�á�
*/

int main()
{
	char str[256] = { 0 };
	char c;
	int i = -1;

	scanf("%c", &c);

	while (c != '\n')
	{
		i++;
		str[i] = c;
		scanf("%c", &c);
	}

	int sum = 0, max = -999999, ans = -1 , temp = -1;
	bool f = false;

	for (int j = 0;j <= i;j++)
	{

		bool jl = f;
		f = (str[j] >= '0' && str[j] <= '9');
		if (!f)
		{
			if (sum > max)
			{
				max = sum;
				ans = temp;
			}
			sum = 0;temp = 0;
			continue;
		}
		if (!jl && f)
		{
			temp = j + 1;
			sum = str[j] - 48;

		}
		else {
			sum = (sum * 10) + (str[j] - 48);
		}

	}

	if (sum > max)
	{
		max = sum;
		ans = temp;
	}
	sum = 0;temp = 0;

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}
