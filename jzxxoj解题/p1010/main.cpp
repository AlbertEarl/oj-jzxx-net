#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��ʹ�ð�λ�����жϡ�
int main()
{
	int x;
	scanf("%d", &x);
	if (x & 0x1)
		printf("n o\n"); else
		printf("y e s\n");

	//�������
	getchar();
	getchar();

	return 0;
}