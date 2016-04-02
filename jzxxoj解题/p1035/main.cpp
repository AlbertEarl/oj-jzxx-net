#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
//˼·��дһ�������ж������ĺ�����Ȼ��������ö�١�
bool is_prime(int x) //�ж�����
{
	if (x == 1)
		return false;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	int begin, end, ans = 0;
	scanf("%d%d", &begin, &end);

	bool current = false; //���浱ǰ�����Ƿ�������
	for (int i = begin;i <= end;i++)
	{
		current = is_prime(i);
		if (current) ans++;
	}

	printf("%d\n", ans);
	
	getchar();
	getchar();

	return 0;
}