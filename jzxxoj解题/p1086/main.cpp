#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·��2��32767֮�����4����ȫ��������ɡ�*/

const int a[5] = { 6,28,496,8128,32768 }; //ע���ʽ��32768�����������������еġ�
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0;i < 4;i++)
	{
		if (a[i + 1] > m)
		{
			printf("%d\n", a[i]);
			break;
		}
		if (a[i] < n)
		{
			continue;
		}
		printf("%d ", a[i]);
	}

	getchar();
	getchar();

	return 0;
}