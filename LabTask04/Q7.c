#include<stdio.h>
int main(){
    int customer_ID;
    float units, total, surcharge = 0;
    printf("Enter customer ID: ");
    scanf("%d", &customer_ID);
    printf("Enter number of units consumed: ");
    scanf("%f", &units);
    printf("Customer ID: %d", customer_ID);
    if (units < 200)
    { total = 16.20 * units;
    printf("\nAmount charges @Rs. 16.20 per unit: %.2f", total); }
    else if (units >= 200 && units < 300)
    { total = 20.10 * units; 
    printf("\nAmount charges @Rs. 20.10 per unit: %.2f", total);}
    else if (units >= 300 && units < 500)
    { total = 27.10 * units; 
    printf("\nAmount charges @Rs. 27.10 per unit: %.2f", total);}
    else if (units > 500)
    { total = 35.90 * units; 
    printf("\nAmount charges @Rs. 35.90 per unit: %.2f", total);}
    if (total > 18000)
    {surcharge = total*0.15;}
    printf("\nSurcharge amount: %.2f", surcharge);
    printf("\nThe net amount paid by the customer: %.2f", total + surcharge);
}