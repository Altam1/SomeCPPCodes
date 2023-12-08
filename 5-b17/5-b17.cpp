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
	cout << "请输入密码长度(12-16)， 大写字母个数(≥2)， 小写字母个数(≥2)， 数字个数(≥2)， 其它符号个数(≥2)" << endl;
	cin >> d >> Ca >> Sm >> num >> el;
	if (cin.good() == 0)
	{
		cout << "输入非法" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return 0;
	}
	if (d > 16 || d < 12)
	{
		cout << "密码长度[" << d << "]不正确" << endl;
		return 0;
	}
	if (Ca < 2 || Ca > d)
	{
		cout << "大写字母个数[" << Ca << "]不正确" << endl;
		return 0;
	}
	if (Sm < 2 || Sm > d)
	{
		cout << "小写字母个数[" << Sm << "]不正确" << endl;
		return 0;
	}
	if (num < 2 || num > d)
	{
		cout << "数字个数[" << num << "]不正确" << endl;
		return 0;
	}
	if (el < 2 || el > d)
	{
		cout << "其他符号个数[" << el << "]不正确" << endl;
		return 0;
	}
	if (Ca + Sm + num + el > d)
	{
		cout << "所有字符类型之和[" << Ca << "+" << Sm << "+" << num << "+" << el << "]大于总密码长度[" << d << "]" << endl;
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