#include <iostream>
using namespace std;

//˼·�����ַ�
int ans;

int main()
{
	char c;
	for (int i = 0;i < 3;i++)
	{
		cin >> c;
		ans = ans + (int)(c - 48);
	}
	cout << ans << endl;
	
	//�������
	cin.get();
	cin.get();

	return 0;
}