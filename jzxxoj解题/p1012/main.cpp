#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <stdlib.h>

//˼·����stdlib.h���__max�ĺ�(����oj�ﲻ��������)

int max(int a, int b)
{
	return a >= b ? a : b;

}

int main()
{
	int x, y;
	scanf("%d %d", &x,&y);
	//printf("%d", __max(x, y));
	printf("%d\n", max(x, y));
	//�������
	getchar();
	getchar();

	return 0;
}