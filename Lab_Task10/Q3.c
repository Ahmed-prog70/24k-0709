#include <stdio.h>
const int temp_max = 30;
int temp_check(int temp)
{
    static int count = 0;
    if (temp > temp_max)
    {
        count++;
    }
    return count;
}

int main()
{
    int n, count = 0;
    printf("Number of temperatures: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        printf("\nEnter temperature %d :", i + 1);
        scanf("%d", &temp);
        count = temp_check(temp);
    }
    printf("\nThe temperature exceeded the limit <%d> times", count);
    return 0;
}
