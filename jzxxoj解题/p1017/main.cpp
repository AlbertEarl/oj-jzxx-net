#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
//˼·�����λ��ʮλ����λ��������
int main()
{
	int x;
	scanf("%d", &x);

	int a[3];
	//��λ
	a[0] = x / 100;
	a[1] = x / 10 % 10;
	a[2] = x % 10;

	sort(a, a + 3);
	//���
	printf("%d\n", a[2] * 100 + a[1] * 10 + a[0]);

	//�������
	getchar();
	getchar();

	return 0;
}