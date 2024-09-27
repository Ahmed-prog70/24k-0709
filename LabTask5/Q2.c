#include <stdio.h>
int main() {
    int weekday, vacation;
    printf("Enter week day (1 for yes, 0 for no)"); 
    scanf("%d", &weekday);
    printf("Enter for vacation (1 for yes, 0 for no): ");
    scanf("%d", &vacation);
    if (!weekday || vacation)
        printf("Sleep in\n");
    else
        printf("Do not sleep\n");
    return 0;
}
