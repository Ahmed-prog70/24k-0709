#include <stdio.h>
int prime(int x)
{
    if (x <= 1)
        return 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("%d is %s", x, prime(x) ? "Prime" : "Not Prime");
}
