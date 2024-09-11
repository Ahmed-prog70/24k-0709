#include <stdio.h>
int main() {
    float principal, rate, interest;
    int time;
    printf("Enter the principal amount(between 100 Rs and 1,000,000 Rs): ");
    scanf("%f", &principal);
    if (principal >= 100 && principal <= 1000000) 
    {
        printf("Enter rate of interest(between 5%% and 10%%): ");
        scanf("%f", &rate); 
    if (rate >= 5 && rate <= 10) 
    {
        printf("Enter time period in years(between 1 and 10 years): ");
        scanf("%d", &time);
    if (time >= 1 && time <= 10) 
    {
        interest = (principal * rate * time) / 100;
        printf("The simple interest is: %.2f Rs\n", interest);
    }
        else {
            printf("Time period must be between 1 and 10 years.\n");
            }
    }
        else {
            printf("Rate of interest must be between 5%% and 10%%.\n");
            }
    }
        else {
            printf("Principal must be between 100 Rs and 1,000,000 Rs.\n");
            }
    return 0;
}