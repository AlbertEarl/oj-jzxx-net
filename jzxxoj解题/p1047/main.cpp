#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·���̳�����
�ȶ���һ����N��һֱ��������2������¼������
Ȼ�����������N��Ӧ�Ķ���������*/

int main()
{
	int n, xb = 0; //xb:�±�
	scanf("%d", &n);
	int a[32];

	while (n > 0)
	{
		xb++;
		a[xb] = n % 2;
		n = n / 2;
	}

	for (int i = xb;i > 0;i--)
	{
		printf("%d", a[i]);
	}

	printf("\n");

	getchar();
	getchar();

	return 0;
}