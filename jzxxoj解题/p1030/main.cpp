#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//˼·������ö�٣�����ʹ��һ��ѭ��
int main()
{
	int money, cat, dog, ans = 0;
	scanf("%d%d%d", &money, &dog, &cat);

	for (int i = 1;i <= money / dog;i++)
	{
		if ((money - (i*dog)) % cat == 0) //�ж��Ƿ�������
		{
			if ((money - (i*dog)) / cat > 0)
				ans++;
		}
	}

	printf("%d\n", ans);

	//�������
	getchar();
	getchar();

	return 0;
}