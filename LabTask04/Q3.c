#include<stdio.h>
int main(){
    char operator;
    float x, y;
    printf("Input first number: ");
    scanf("%f", &x);
    printf("Input second number: ");
    scanf("%f", &y);
    printf("Input the operator: ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
    printf("%.1f + %.1f = %.1f", x,y,x+y);
        break;
    case '-':
    printf("%.1f - %.1f = %.1f", x,y,x-y);
        break;
    case '*':
    printf("%.1f * %.1f = %.1f", x,y,x*y);
        break;
    case '/':
    printf("%.1f / %.1f = %.1f", x,y,x/y);
        break;
    default:
    printf("Invalid operator.");
    }
}