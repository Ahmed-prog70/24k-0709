#include <stdio.h>
int main()
{
    int pairs, start;
    printf("Enter the number of pairs: ");
    scanf("%d", &pairs);
    printf("Enter the starting number: ");
    scanf("%d", &start);
    int evenodd[2][pairs][2];
    int countOdd = 0, countEven = 0;
    for (int i = start; countOdd < pairs || countEven < pairs; i--)
    {
        if (i % 2 == 0 && countEven < pairs)
        {
            evenodd[0][countEven][0] = i;
            evenodd[0][countEven][1] = i - 2;
            countEven++;
        }
        else if (i % 2 != 0 && countOdd < pairs)
        {
            evenodd[1][countOdd][0] = i;
            evenodd[1][countOdd][1] = i - 2;
            countOdd++;
        }
    }
    printf("Even numbers:\n");
    for (int i = 0; i < pairs; i++)
    {
        printf("%d %d\n", evenodd[0][i][0], evenodd[0][i][1]);
    }
    printf("Odd numbers:\n");
    for (int i = 0; i < pairs; i++)
    {
        printf("%d %d\n", evenodd[1][i][0], evenodd[1][i][1]);
    }
    return 0;
}
