#include<stdio.h>
int main(){
    int a,b,temp=0;
  printf("input number a:\n");
   scanf("%d", &a);
  printf("Input number b:\n");
    scanf("%d", &b);
         temp=a;
         a=b;
         b=temp;
        printf("Number a is %d and b is %d", a,b);
}
