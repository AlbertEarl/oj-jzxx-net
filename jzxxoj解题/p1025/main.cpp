#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
//˼·������������
int main()
{
	int n;
	scanf("%d", &n);
	int a[20];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + n);//����

	printf("%d %d\n", a[n - 1], a[0]);

	//�������
	getchar();
	getchar();

	return 0;
}