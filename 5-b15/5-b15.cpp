#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char s[3][128] = { 0 };
	int t[5] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i + 1 << "��" << endl;
		cin.getline(s[i], 256, '\n');
		for (int j = 0; s[i][j] != '\0'; j++)
		{
			if (s[i][j] >= 'a' && s[i][j] <= 'z') //ͳ��Сд��ĸ����
				t[0]++;
			else  if (s[i][j] >= 'A' && s[i][j] <= 'Z')//ͳ�ƴ�д��ĸ����
				t[1]++;
			else if (s[i][j] >= '0' && s[i][j] <= '9') //ͳ�����ָ���
				t[2]++;
			else if (s[i][j] == ' ')  //ͳ�ƿո����
				t[3]++;
			else t[4]++;  //ͳ�������ַ�����
		}
	}
	cout << "��д : " << t[1] << endl;
	cout << "Сд : " << t[0] << endl;
	cout << "���� : " << t[2] << endl;
	cout << "�ո� : " << t[3] << endl;
	cout << "���� : " << t[4] << endl;
	return 0;
}