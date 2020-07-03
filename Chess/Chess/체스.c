#include<stdio.h>
char chess[50][50];
int min = 2001;

void black(int n, int m, int a, int b);
void white(int n, int m, int a, int b);

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
			scanf("%s", &chess[i]);
	for (int i = 0; i < n - 7; i++)
	{
		for(int j = 0; j < m - 7; j++)
		{
			black(n, m, i , j);
			white(n, m, i , j);
		}
	}
	printf("%d", min);
	return 0;
}

void black(int n, int m, int a ,int b)
{
	int black_cnt = 0;
	for (int i = a; i < a + 8; i++)
	{
		for (int j = b; j < b + 8; j++)
		{
			if ((i + j) % 2 == 0 && chess[i][j] == 'W')
				black_cnt++;
			if ((i + j) % 2 == 1 && chess[i][j] == 'B')
				black_cnt++;
		}
	}
	if (min > black_cnt)
		min = black_cnt;
}

void white(int n, int m, int a, int b)
{
	int white_cnt = 0;
	for (int i = a; i < a + 8; i++)
	{
		for (int j = b; j < b + 8; j++)
		{
			if ((i + j) % 2 == 1 && chess[i][j] == 'W')
				white_cnt++;
			if ((i + j) % 2 == 0 && chess[i][j] == 'B')
				white_cnt++;
		}
	}
	if (min > white_cnt)
		min = white_cnt;
}