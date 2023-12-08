#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char arr[256] = { 0 };
	cin.getline(arr, 256, '\n');
	int leng = 0,max=0,min=0,num=0,comp=0;
	cin >> leng >> max >> min >> num >> comp;
	char p[17];
	for (int i = 0; i < 10; i++)
	{
		cin >> p;
		int j = 0;
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		for (; p[j] != '\0'; j++);
		if (j != leng)
		{
			cout << "´íÎó" << endl;
			continue;
		}
		for (int k = 0; k <= j; k++)
		{
			if (p[k] >= '0' && p[k] <= '9')
			{
				c++;
			}
			else if (p[k] >= 'A' && p[k] <= 'Z')
			{
				a++;
			}
			else if (p[k] >= 'a' && p[k] <= 'z')
			{
				b++;
			}
			else
			{
				d++;
			}
		}
		if (c < num || a < max || b < min || d < comp || c + a + b + d != leng + 1 || num < 2 || max < 2 || min < 2 || comp < 2)
		{
			cout << "´íÎó" << endl;
			continue;
		}
		else
		{
			cout << "ÕýÈ·" << endl;
		}
	}
	return 0;
}