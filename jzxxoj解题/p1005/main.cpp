#include <iostream>
using namespace std;
//˼·�����ַ�����,��ʵ��Ŀ��˼���ǵ��������ע��0�Ĵ���
int main()
{
	char chr[3] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		cin >> chr[i];
	}
	cin.get();
	bool f = false;

	for (int i = 2;i >= 0;i--)
	{
		if (chr[i] != '0') f = true;
		if (f)
			cout << chr[i];
	}
	cout << endl;

	//�������
	cin.get();
	

	return 0;
}