#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·���������Լ������С������

int gcd(int a,int b)
{
	return a == 0 ? b : gcd(b%a, a);
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", gcd(x, y)*(x / gcd(x, y))*(y / gcd(x, y)));

	//�������
	getchar();
	getchar();

	return 0;
}