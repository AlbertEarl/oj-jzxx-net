#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��if�жϡ�
int main()
{
	int x;
	scanf("%d", &x);
	//�ж�
	if (x < 10) printf("A\n"); else
		if (x >= 10 && x < 20) printf("B\n"); else
			if (x >= 20 && x < 40) printf("C\n"); else
				if (x >= 40 && x < 50) printf("D\n"); else
					printf("E\n");

	//�������
	getchar();
	getchar();

	return 0;
}