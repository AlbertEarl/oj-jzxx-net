#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
/*˼·����p1040��࣬�ȴ�ӡ ������-��ǰ���� ���ո�
�ٴ�ӡ ����ǰ����*2��-1 �� *���ٴ�ӡ ��������-��ǰ������*2 ���ո�
�ٴ�ӡ ����ǰ����*2��-1 �� *���ٴ�ӡ ��������-��ǰ������*2 ���ո�
����ӡ ����ǰ����*2��-1 �� *��
*/
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		//ǰ׺�ո�
		for (int j = 0;j < n - i;j++)
		{
			printf(" ");
		}
		//ǰ���*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//ǰ��ո�
		for (int j = 0;j < (n - i) * 2;j++)
		{
			printf(" ");
		}
		//�м��*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//�м�ո�
		for (int j = 0;j < (n - i) * 2;j++)
		{
			printf(" ");
		}
		//�����*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//����
		printf("\n");
	}

	getchar();
	getchar();
	
	return 0;
}