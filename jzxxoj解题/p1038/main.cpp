#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*
˼·��дһ����������һ�����顣Ȼ�������
�ֽ�������������һ������i����ʼֵΪ2������Ϊö��n�ܲ��ܱ�i������
��������ִ��n=n/i��ֱ���޷�����Ϊֹ��ÿ�������������±�����1��
����i����������֮��Ͱ�i��1��ֱ��i����nʱֹͣѭ����
ע�Ᵽ����������������Ϊ��������Ϊ�����Ѿ��Ȱ������������������Ӹ���ȥ�ˡ�
*/

int* decomposition(int n)
{
	//����p[0]�洢�±ꡣ
	int i = 2;
	int *p = new int[32];
	p[0] = 0;
	while (i <= n)
	{
		while (n%i == 0) //�ж��ܷ�����
		{
			p[0]++;
			n = n / i;
			p[p[0]] = i;
		}
		i++;
	}

	return p;
}

int main()
{
	int n;
	scanf("%d", &n);

	int* ans;

	ans = decomposition(n);

	for (int i = 1;i < ans[0];i++)
	{
		printf("%d ", ans[i]);
	}
	printf("%d\n", ans[ans[0]]);

	getchar();
	getchar();

	return 0;
}