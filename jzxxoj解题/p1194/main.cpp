#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*˼·��������Ŀ���������ֲ�����˵���ǱȽ��ѵġ�
����˼·�����ȰѶ������׺���ʽת��Ϊ��׺���ʽ��
Ȼ���ټ����׺���ʽ��
*/

bool one(char c)
{
	return (c == '+' || c == '-'); //�ж��Ƿ���һ������
}

bool two(char c)
{
	return (c == '*' || c == '/'); //�ж��Ƿ��Ƕ�������
}

string suffixdeal(string in)
{
	stack<char> st; //����һ���ַ�ջ
	string temp;  //��׺���ʽ�洢�������ʱ�ַ�����

	for (int i = 0;i < in.size();i++) //in.size()�ķ���ֵ��in����ַ����ĳ���
	{
		if (isdigit(in[i]) || in[i] == '.') //isdigit�����������ж��ַ��Ƿ��ǰ��������ֵģ�������С�����㣬����С����Ҳ�ǺϷ���
		{
			while (isdigit(in[i]) || in[i] == '.') temp += in[i++]; //����Ͳ���˵�ˣ�ȡ����
			i--; //�Ѷ�ĸ�������
			temp = temp + " "; //һ�����Ѿ����ˣ���һ���ո�
		}
		else
			if (one(in[i])) //�����һ������
			{
				while (st.size() && (one(st.top()) || two(st.top()))) //�������ȼ����ڵ���һ���������ջ
				{
					temp += st.top(); //��׺���ʽ���������
					st.pop(); //��ջ
				}
				st.push(in[i]); //���������ѹ��ջ��
			}
			else if (in[i] == ')') //�������������
			{
				while (st.top() != '(') //��������������������ջ
				{
					temp += st.top(); //��ջ���ӵ���׺���ʽ��
					st.pop(); //��ջ
				}
				st.pop(); //�������ų�ջ
			}
			else if (two(in[i])) //����Ƕ�������
			{
				while (st.size() && two(st.top())) //�������ȼ����ڵ��ڶ����������ջ
				{
					temp += st.top(); //��ջ��������ӵ���׺���ʽ��
					st.pop(); //��ջ
				}
				st.push(in[i]); //���������ѹ��ջ��
			}
			else
				st.push(in[i]); //�������ѹջ


	}

	//������ջ����ջ������ݶ��ӵ���׺���ʽ��
	while (st.size())
	{
		temp += st.top();
		st.pop();
	}

	return temp; //���غ�׺���ʽ
}

double GetNum(string suffix, int l) //ȡ�����Լ�����
{
	bool f = true;
	int i = l;
	double num = 0.0;
	double res = 0.0;
	while (suffix[i] != ' ')
	{
		if (suffix[i] == '.')
		{
			f = false;
			num = 0.1;
			i++;
			continue;
		}
		if (f)
		{
			res = res * 10 + (suffix[i] - 48);
		}
		else {
			res = res + (suffix[i] - 48) * num;
			num = num*0.1;
		}
		i++;
	}
	return res;
}

int calci(string suffix, int l) //�����±�
{
	int i = l;
	while (suffix[i] != ' ')
	{
		i++;
	}
	return i;
}

double calc(string suffix)
{
	stack<double> st; //��ջ
	double res = 0.0; //��׺���ʽ�ļ�����

	for (int i = 0;i < suffix.size();i++)
	{
		if (isdigit(suffix[i]) || suffix[i] == '.')
		{
			st.push(GetNum(suffix, i)); //ȡ����ѹ��ջ��
			i = calci(suffix, i);
		}
		else if (suffix[i] == ' ') //���ڿո������һ��ѭ��
		{
			continue;
		}
		else if (suffix[i] == '+') //�����
		{
			res = st.top();
			st.pop();
			res = res + st.top();
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '-') //�����
		{
			res = st.top();
			st.pop();
			res = st.top() - res;
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '*') //�����
		{
			res = st.top();
			st.pop();
			res = res * st.top();
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '/') //�����
		{
			res = st.top();
			st.pop();
			res = st.top() / res;
			st.pop();
			st.push(res);
		}
	}
	return res; //���غ�׺���ʽ�ļ�����
}

int main()
{
	string infix, suffix;
	cin >> infix;
	suffix = suffixdeal(infix);
	cout << calc(suffix) << endl;

	getchar();
	getchar();

	return 0;
}