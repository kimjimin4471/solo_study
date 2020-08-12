#include<stdio.h>

char ch[1000001];

int main()
{
	int zero = 0, one = 0;
	scanf("%s", ch);
	int flag = -1;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (flag != 0 && ch[i] == '0')
		{
			zero++;
			flag = 0;
		}
		if (flag != 1 && ch[i] == '1')
		{
			one++;
			flag = 1;
		}
	}
	if (zero < one)
		printf("%d", zero);
	else printf("%d", one);
	return 0;
}