#include <stdio.h>
int main()
{
    int ph;
    printf("Enter ph: ");
    scanf("%d", &ph);
    if (ph > 7){
        if (ph < 12)
            printf("Alkaline");
        else
            printf("Really Alkaline");
    } else
    {
        if (ph == 7)
            printf("Neutral");
        else if (ph > 2)
            printf ("Acidic");
        else
            printf("Really Acidic");
    }
}
