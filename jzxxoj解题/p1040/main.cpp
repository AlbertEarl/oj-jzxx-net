#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·���ȴ�ӡ ������-��ǰ���� ���ո�
�ٵ���Ȼ��˳��
*/
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++) //i:��
	{
		for (int j = 1;j <= n - i;j++) //��ӡ�ո�
		{
			printf(" ");
		}

		char x = 'A';
		//�ȵ��Ŵ�ӡ
		for (int j = i - 1;j >= 0;j--)
		{
			printf("%c", x + j);
		}
		//��˳�Ŵ�ӡ
		for (int j = 1;j < i;j++)
		{
			printf("%c", x + j);
		}
		printf("\n"); //��ӡ�س�
	}

	getchar();
	getchar();

	return 0;
}