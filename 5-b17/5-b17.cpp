#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;


int main()
{
	srand((unsigned int)time(0));
	int d = 0,Ca =0 ,Sm=0,num=0,el=0;
	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	cin >> d >> Ca >> Sm >> num >> el;
	if (cin.good() == 0)
	{
		cout << "����Ƿ�" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return 0;
	}
	if (d > 16 || d < 12)
	{
		cout << "���볤��[" << d << "]����ȷ" << endl;
		return 0;
	}
	if (Ca < 2 || Ca > d)
	{
		cout << "��д��ĸ����[" << Ca << "]����ȷ" << endl;
		return 0;
	}
	if (Sm < 2 || Sm > d)
	{
		cout << "Сд��ĸ����[" << Sm << "]����ȷ" << endl;
		return 0;
	}
	if (num < 2 || num > d)
	{
		cout << "���ָ���[" << num << "]����ȷ" << endl;
		return 0;
	}
	if (el < 2 || el > d)
	{
		cout << "�������Ÿ���[" << el << "]����ȷ" << endl;
		return 0;
	}
	if (Ca + Sm + num + el > d)
	{
		cout << "�����ַ�����֮��[" << Ca << "+" << Sm << "+" << num << "+" << el << "]���������볤��[" << d << "]" << endl;
		return 0;
	}
	static const char other[] = "~!@#$%^&*-_=+,.?;[]QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
	char pas[17] = { 0 };
	cout << d << " " << Ca << " " << Sm << " " << num << " " << el << endl;
	for (int j = 1; j <= 10; j++)
	{
		for (int i = 0; i < Ca; i++)
		{
			int t = rand() % d;
			if (pas[t] == '\0')
			{
				pas[t] = other[rand() % 26 + 20];
			}
			else
				i--;
		}
		for (int i = 0; i < Sm; i++)
		{
			int t = rand() % d;
			if (pas[t] == '\0')
			{
				pas[t] = other[rand() % 26 + 46];
			}
			else
				i--;
		}
		for (int i = 0; i < num; i++)
		{
			int t = rand() % d;
			if (pas[t] == '\0')
			{
				pas[t] = other[rand() % 10 + 72];
			}
			else
				i--;
		}
		for (int i = 0; i < el; i++)
		{
			int t = rand() % d;
			if (pas[t] == '\0')
			{
				pas[t] = other[rand() % 20];
			}
			else
				i--;
		}
		for (int i = 0; i < d; i++)
		{
			if (pas[i] == '\0')
			{
				pas[i] = other[rand() % 83];
			}
		}

		cout << pas << endl;
		for (int k = 0; k < 17; k++)
		{
			pas[k] = '\0';
		}

	}

	return 0;
}