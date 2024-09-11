#include<stdio.h>
int main(){
    float salary, taxrate, tax;
    printf("Please enter your salary: ");
    scanf("%f", &salary);
    printf("Please enter tax rate: ");
    scanf("%f", &taxrate);
    tax= salary*(taxrate/100);
    printf("Your payable tax is: %f\n", tax);
    printf("You salary after tax is: %f", salary-tax);
    return 0; 
    }
