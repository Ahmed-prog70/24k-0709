#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for ( int i = 2; i < n; i++)
    {
        if (n%i==0 && n!=i){
            printf("not prime");
            break; 
    }
    else {
        int a = 0, b = 1, nextTerm = 0;

        printf("Fibonacci series up to %d:\n", n);
        while (a <= n) {
            printf("%d ", a);  
            nextTerm = a + b;  
            a = b;             
            b = nextTerm;
        }
    printf(" prime number");
    break;}
}
}