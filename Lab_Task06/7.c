#include<stdio.h>
int main()
{
    int c=65;
    for (int i = 0; i <= 5; i++)
    {
        if (i==0|| i==5)
        {
            printf("%c  %c  %c  %c  %c\n", c, c+1, c+2, c+3, c+4 ); }
        else{
        printf("%c           %c\n",c, c+4 );
    }
        c++;
    }
}