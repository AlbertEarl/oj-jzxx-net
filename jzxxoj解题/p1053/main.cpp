#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*˼·��ʹ���ַ������ɡ�*/

int main()
{
	string s;
	char ch;
	int ans = 0;
	while (cin >> ch)
	{
		s += ch;
	}

	for (int i = 0;i < s.length();i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			++ans;
		}
	}

	cout << ans << endl;


	return 0;
}