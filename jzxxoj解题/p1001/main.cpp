#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

const double pi = 3.1415926;

/*˼·�����ݹ�ʽ��������ܳ��������%.2lf��2������2λС����
��Ҫǿ������ת����
*/
int main()
{
	int x;
	scanf("%d", &x);
	printf("%.2lf\n", (double)x*x*pi); //�����pi*(r^2)
	printf("%.2lf\n", (double)2*x*pi); //�ܳ���2r*pi

	//�������
	getchar();
	getchar();

	return 0;
}