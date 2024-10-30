#include <stdio.h>
int main()
{
    int first, last, prime;
    printf("Enter the starting number: ");
    scanf("%d", &first);
    printf("Enter the ending number: ");
    scanf("%d", &last);
    for (int i = first; i <= last; i++)
    {
        if (i < 2)
            continue;
        prime = 1;
        for (int k = 2; k * k <= i; k++)
        {
            if (i % k == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
