#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//˼·��if�ж�

int main()
{
	int x;
	scanf("%d", &x);
	if (x > 85)
		printf("VERY GOOD\n");
	if (x <= 85 && x >= 60)
		printf("GOOD\n");
	if (x < 60)
		printf("BAD\n");
	
	//�������
	getchar();
	getchar();

	return 0;
}