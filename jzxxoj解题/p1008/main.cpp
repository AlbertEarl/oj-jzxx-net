#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//˼·����ģ��
int a, b, c, d, e, t;

int main()
{
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	t = a / 3;//��1��С���ѷ�
	a = t;
	e = e + t;
	b = b + t;
	t = b / 3;//��2��С���ѷ�
	b = t;
	c = c + t;
	a = a + t;
	t = c / 3;//��3��С���ѷ�
	c = t;
	b = b + t;
	d = d + t;
	t = d / 3;//��4��С���ѷ�
	d = t;
	c = c + t;
	e = e + t;
	t = e / 3;//��5��С���ѷ�
	e = t;
	a = a + t;
	d = d + t;

	printf("%d %d %d %d %d\n", a, b, c, d, e);

	//�������
	getchar();
	getchar();
	return 0;
}