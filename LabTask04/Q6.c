#include<stdio.h>
int main(){
    float cost, discount = 0, final;
    printf("Enter the cost:");
    scanf("%f", &cost);
    if (cost >= 500 && cost < 2000)
    {discount = cost*0.05;}
    else if (cost >= 2000 && cost <=4000)
    {discount = cost*0.10;}
    else if (cost > 4000 && cost <=6000)
    {discount = cost*0.20;}
    else if (cost > 6000 )
    {discount = cost*0.35;}
    final = cost - discount;
    printf("The actual amount is %.1f \nThe amount saved is %.1f \nThe price after discount is %.1f", cost, discount, final);
}