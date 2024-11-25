#include <stdio.h>
typedef struct
{
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int daysInMonth(int currentMonth, int currentYear)
{
    int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (currentMonth == 2 && isLeapYear(currentYear))
        return 29;

    return daysPerMonth[currentMonth - 1];
}

int isValidDate(Date inputDate)
{
    if (inputDate.year < 1 || inputDate.month < 1 || inputDate.month > 12 || inputDate.day < 1 || inputDate.day > daysInMonth(inputDate.month, inputDate.year))
        return 0;

    return 1;
}

int calculateDaysBetween(Date startDate, Date endDate)
{
    int totalDays = 0;
    while (startDate.year < endDate.year || (startDate.year == endDate.year && startDate.month < endDate.month) || (startDate.year == endDate.year && startDate.month == endDate.month && startDate.day < endDate.day))
    {
        startDate.day++;
        if (startDate.day > daysInMonth(startDate.month, startDate.year))
        {
            startDate.day = 1;
            startDate.month++;
            if (startDate.month > 12)
            {
                startDate.month = 1;
                startDate.year++;
            }
        }
        totalDays++;
    }
    return totalDays;
}

int dayOfWeek(Date inputDate)
{
    int month = inputDate.month;
    int year = inputDate.year;
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int centuryPart = year % 100;
    int centuryBase = year / 100;
    return (inputDate.day + (13 * (month + 1)) / 5 + centuryPart + centuryPart / 4 + centuryBase / 4 + 5 * centuryBase) % 7;
}

int main()
{
    Date startDate, endDate;

    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &startDate.day, &startDate.month, &startDate.year);

    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &endDate.day, &endDate.month, &endDate.year);

    if (!isValidDate(startDate) || !isValidDate(endDate))
    {
        printf("One of the dates is invalid.\n");
        return 0;
    }

    printf("Days between: %d\n", calculateDaysBetween(startDate, endDate));
    printf("Day of the week for the first date: %d\n", dayOfWeek(startDate));
    printf("Day of the week for the second date: %d\n", dayOfWeek(endDate));
    return 0;
}
