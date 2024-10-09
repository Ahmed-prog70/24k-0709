#include <stdio.h>

int main()
{
    int sum = 0, n = 0;
    do
    {
        printf("\n Enter n: ");
        scanf("%d", &n);
        printf("%d + %d = %d", n, sum, sum + n);
        sum = sum + n;
    } 
    while (n != 0);
}