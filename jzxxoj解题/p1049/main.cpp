#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
/*˼·������һ��string��Ȼ���жϡ������ַ�����������n���ַ��뵹���ĵ�n���ַ�Ӧ����һ����*/

int main()
{
	string s;
	bool f = true;
	cin >> s;

	for (int i = 0;i < (s.length() - 1) / 2;i++)
	{
		//cout << s[i];
		//cout << s[s.length() - 2 - i];
		if (s[i] != s[s.length() - 2 - i])
		{
			f = false;
			break;
		}
	}

	if (f)
	{
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}

	cout << endl;
	cin.get();
	cin.get();
	return 0;
}