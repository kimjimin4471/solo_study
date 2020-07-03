#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
