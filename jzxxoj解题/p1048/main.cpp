#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#define Number 10

/*˼·������ʵ���е�ࡣ�ҵ�˼·�������ģ�
��ʼ�����ж�����������ǵ������ǵݼ������У�Ȼ��ö�٣�ÿ���жϻ��Ƿ���ѭ֮ǰ�Ĺ��ɣ�����ѭ��
��֮ǰ�����ĵط������ң�ֱ��ֻʣһ������Break��
*/

int sum = 0;
int main()
{
	int a[Number+1], f = true;
	bool ax[Number];
	
	for (int i = 0;i < Number;i++)
	{
		ax[i] = true;

	}

	for (int i = 0;i < Number;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < Number;i++) //ͳ�Ƹ���
	{
		if (i == 9)
		{
			break;
		}
		if (!ax[i])
		{
			continue;
		}
		f = true;
		for (int j = i;j < Number;j++)
		{
			if (j == i)
			{
				if (a[i + 1] < a[i])
				{
					f = false;
				}
			}
			else {
				ax[j - 1] = false;
			}
			if (j == 9)
			{
				sum++;
				break;
			}
			if (f)
			{
				if (a[j + 1] < a[j])
				{
					sum++;
					break;
				}
			}
			if (!f)
			{
				if (a[j + 1] > a[j])
				{
					sum++;
					break;
				}
			}
		}

	}

	printf("%d\n", sum);

	for (int i = 0;i < Number;i++)
	{
		ax[i] = true;

	}

	for (int i = 0;i < Number;i++) //���
	{
		if (i == 9)
		{
			break;
		}
		if (!ax[i])
		{
			continue;
		}
		f = true;
		for (int j = i;j < Number;j++)
		{
			if (j == i)
			{
				if (a[i + 1] < a[i])
				{
					f = false;
				}
			}
			else {
				ax[j - 1] = false;
			}
			if (j == 9)
			{
				for (int k = i;k < j;k++)
				{
					printf("%d ", a[k]);
				}
				printf("%d\n", a[j]);
				break;
			}
			if (f)
			{
				if (a[j + 1] < a[j])
				{
					for (int k = i;k < j;k++)
					{
						printf("%d ", a[k]);
					}
					printf("%d\n", a[j]);
					break;
				}
			}
			if (!f)
			{
				if (a[j + 1] > a[j])
				{
					for (int k = i;k < j;k++)
					{
						printf("%d ", a[k]);
					}
					printf("%d\n", a[j]);
					break;
				}
			}
		}

	}

	getchar();
	getchar();

	return 0;
}

