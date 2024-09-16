#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%3==0)
    printf("\n%d is a multiple of 3",num);
    else 
    printf("\n%d is not a multiple of 3",num);
    return 0;
}