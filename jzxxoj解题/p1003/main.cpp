#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//˼·����if�жϾͿɽ��������

int main()
{
	int n;
	scanf("%d", &n);

	if (n > 0) n++;
	if (n < 0) n--;

	printf("%d\n", n);
	//�������
	getchar();
	getchar();


	return 0;
}