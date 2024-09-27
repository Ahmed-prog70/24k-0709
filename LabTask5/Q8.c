#include <stdio.h>
#include <string.h>
int main() {
    char roll_number[7];
    int r_year, sem_no;
    char section;
    printf("Enter the roll number (format: 24k-0000): ");
    scanf("%s", roll_number);
    r_year = (roll_number[0] - '0') * 10 + (roll_number[1] - '0'); 
    int years_passed = 24 - r_year;
    sem_no = years_passed * 2 + 1;
    int section_no = roll_number[4] - '0'; 
    section = 'A' + (section_no - 1);
    printf("Registration Year: 20%d\n", r_year);
    printf("Current Semester: %d\n", sem_no);
    printf("Section: %c\n", section);
    return 0;
}
