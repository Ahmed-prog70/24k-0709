#include<stdio.h>
int main()
{
    float distance = 1207, fuel_price1 = 118, fuel_price2 = 123, fuel_avg, total_cost, total_fuel;
    printf("Enter your car's fuel average:");
    scanf("%f", &fuel_avg);
    if (fuel_avg > 0)
    {
    total_fuel = (distance*2)/fuel_avg;
    fuel_price1 = (total_fuel/2)*fuel_price1;
    fuel_price2 = (total_fuel/2)*fuel_price2;
    total_cost = fuel_price1 + fuel_price2;
    printf("\n Total fuel consumed: %f\n Fuel cost for going: %f\n Fuel cost for coming back: %f\n Total cost: %f",total_fuel,fuel_price1,fuel_price2,total_cost);
    }
    else
    printf("The average must be positive");
return 0;
}