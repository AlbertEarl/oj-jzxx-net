#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//˼·�����ַ�����ȫ�㶨

int main()
{
	char chr[4] = { 0 };

	for (int i = 0;i < 4;i++) //˳������
	{
		cin >> chr[i];
	}
	
	for (int i = 3;i >= 0;i--)  //�������
	{
		cout << chr[i];
	}

	cout << endl;
	//�������
	cin.get();
	cin.get();
	


	return 0;
}