#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

void in_put(char name[10][9], char St_number[10][8], int grades[10])
{
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
		scanf("%s %s %d", &St_number[i], &name[i], &grades[i]);
	}
}

void sort(char name[10][9], char St_number[10][8], int grades[10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{

			if (grades[j] < grades[j + 1])
			{
				int t = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = t;
				for (int m = 0; m < 9; m++)
				{
					char tt = name[j][m];
					name[j][m] = name[j + 1][m];
					name[j + 1][m] = tt;
				}
				for (int m = 0; m < 8; m++)
				{
					char ttt = St_number[j][m];
					St_number[j][m] = St_number[j + 1][m];
					St_number[j + 1][m] = ttt;
				}
			}
		}
	}
}
void out_put(char name[10][9], char St_number[10][8], int grades[10])
{
	printf("\n全部学生(成绩降序):\n");
	for (int i = 0; i < 10; i++)
	{

		printf("%s %s %d\n", name[i], St_number[i], grades[i]);
	}
}

int main()
{
	char name[10][9];
	char St_number[10][8];
	int grades[10];
	in_put(name, St_number, grades);
	sort(name, St_number, grades);
	out_put(name, St_number, grades);
	return 0;
}