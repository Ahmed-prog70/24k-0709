#include<stdio.h>
int main(){
    int num,x;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>0 && num%2==0 && num%10==0)
    {
        x= num;
        printf("x is %d", x);
    }
    else
    {
        printf("Invalid Input. Exiting.");
        return 0;
    }
    
}