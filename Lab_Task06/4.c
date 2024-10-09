#include<stdio.h>
int main(){
    int x,y, sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    y=x;
    while (x!=0)
    {
        sum += (x%10)*(x%10)*(x%10);
        x=x/10;
    }
    if (y==sum)
    printf("It is an armstrong number");
    else
    printf("It is not an armstrong number");
     
}