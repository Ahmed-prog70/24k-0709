#include<stdio.h>
int main(){
   float gram_fat, cal, fat_cal , perc_fat;
   printf("Input Total calories: ");
   scanf("%f",&cal);
   printf("Input Grams of Fat: ");
   scanf("%f",&gram_fat);
   if (cal<0 || gram_fat<0)
{
    printf("Invalid input");
}
else {
    fat_cal=gram_fat*9;
    perc_fat=fat_cal/cal;
    if (fat_cal>cal)
    printf("\neither the calories or fat grams were incorrectly entered.");
    else{
        printf("\nTotal calories:%f \n Percentage of Calories from fat: %.2f", cal, perc_fat*100);
    }
}
}

