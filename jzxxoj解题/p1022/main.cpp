#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·����ʽn(n+1)(2n+1)/6
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", n*(n + 1)*(2 * n + 1) / 6);

	//�������
	getchar();
	getchar();

	return 0;
}