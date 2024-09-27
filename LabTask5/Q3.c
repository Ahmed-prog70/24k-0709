#include <stdio.h>
int main() {
    char coffee, manual;
    int doublecup;
    printf("'B' for Black\n'W' for White\nPlease select coffee type: ");
    scanf(" %c", &coffee);
    if ((coffee != 'B'&&coffee != 'b') && (coffee != 'W' && coffee != 'w')) {   
        printf("Invalid Coffee Type");
return 0;
}
    printf("'1' for doublecup\n'0' for not doublecup\nPlease select cup size: ");
    scanf("%d", &doublecup);   
     if (doublecup != 0 && doublecup != 1) {
        printf("Invalid Entry - doublecup Cup\n");
        return 0;
    }
    printf("'Y' for Yes\n'N' for No\nIs your coffee manual? ");
    scanf(" %c", &manual);
    float water = (coffee == 'W') ? 15 : 20;
    float sugar = (coffee == 'W') ? 15 : 20;
    float mix1 = (coffee == 'W') ? 20 : 25;
    float cof = (coffee == 'W') ? 2 : 15;
    float milk = (coffee == 'W') ? 4 : 0;
    float mix2 = (coffee == 'W') ? 20 : 25;
    if (doublecup == 1) {
        water *= 1.5;
        sugar *= 1.5;
        mix1 *= 1.5;
        cof *= 1.5;
        milk *= 1.5;
        mix2 *= 1.5;
    }
    printf("Put water: %.2f mins\nSugar: %.2f mins\nMix well: %.2f mins\nAdd Coffee: %.2f mins\nAdd Milk: %.2f mins\nMix well: %.2f mins", water, sugar, mix1, cof, milk, mix2);
    return 0;
}
