#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstdio>
using namespace std;
//˼·��ʹ�ñ�׼������,��p1014���
int main()
{
	int a[3];
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	sort(a, a + 3); //���±�Ϊ[0,3)����������

	printf("%d %d %d\n", a[2], a[1], a[0]);


	//�������
	getchar();
	getchar();

	return 0;
}