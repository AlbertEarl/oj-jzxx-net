#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*˼·������һ���ַ�����Ȼ��ѭ����⡣*/

int main()
{
	char number[201];
	int ans = 0;
	scanf("%s", &number);

	for (int i = 0;i < strlen(number);i++)
	{
		ans = ans + number[i] - 48;
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}