#include<stdio.h>
int main(){
    int n;
    printf("Input a positive number: ");
    scanf("%d", &n);
    if (n>0)
    {
        switch (n)
        {
        case 1:
        printf("one");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
         }
         if (n > 9)
        {   printf("greater than 9");}     
    }
    else 
    printf("You entered a negative  number");
}