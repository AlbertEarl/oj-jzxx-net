#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*˼·��ѭ���㶨���Լ��������ǵ��ύʱ��%I64d�ĳ�%lld��*/

int main()
{
	long long n, x = 1;
	scanf("%I64d", &n);
	
	while (x < n)
	{
		x *= 2;
	}

	if (x == n)
	{
		printf("%I64d\n", x);
		
		getchar();
		getchar();

		return 0;
	}

	long long y = x / 2;
	
	if ((n - y) <= (x - n)) /*���ڵĻ����С�ġ�*/
	{
		printf("%I64d\n", y);
	}
	else {
		printf("%I64d\n", x);
	}

	getchar();
	getchar();

	return 0;
}