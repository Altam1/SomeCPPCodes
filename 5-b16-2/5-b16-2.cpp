/*1956220 ͨ�� ����̹ */
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void in_put(string name[10], string St_number[10], int grades[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "�������" << i + 1 << "���˵�ѧ�š��������ɼ�" << endl;
		cin >> St_number[i];
		cin >> name[i];
		cin >> grades[i];
	}
}

void sort(string name[10], string St_number[10], int grades[10])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (grades[j] > grades[j + 1])
			{
				int t = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = t;
				string tt = name[j];
				name[j] = name[j + 1];
				name[j + 1] = tt;
				string ttt = St_number[j];
				St_number[j] = St_number[j + 1];
				St_number[j + 1] = ttt;

			}
		}
	}
}
void out_put(string name[10], string St_number[10], int grades[10])
{
	cout << endl;
	cout << "������ѧ��(�ɼ�����):" << endl;
	for (int i = 0; grades[i] < 60; i++)
	{
		cout << name[i] << " " << St_number[i] << " " << grades[i] << endl;
	}
}

int main()
{
	string name[10];
	string St_number[10];
	int grades[10];
	in_put(name, St_number, grades);
	sort(name, St_number, grades);
	out_put(name, St_number, grades);
	return 0;
}