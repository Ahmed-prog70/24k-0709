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
    printf(" prime number");
    break;}
}
}