#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·��ö�٣���������Ż������ N<3�� �����ݡ�
int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	bool f = false;
	int ts = 0;
	for (int i = 5;i <= n;i = i + 5) //�Ż�1�����ܱ�5����������ö��
	{
		f = false;
		ts = i;
		while (ts > 0) 
		{
			if (ts % 10 == 5)
			{
				f = true;
				break; //�Ż�2������5���˳�ѭ��
			}
			ts = ts / 10;
		}
		if (f)
			ans++;
	}

	printf("%d\n", ans);

	//�������
	getchar();
	getchar();

	return 0;
}