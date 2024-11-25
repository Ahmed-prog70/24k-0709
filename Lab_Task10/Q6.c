#include <stdio.h>
#include <string.h>

typedef struct
{
    char packageName[50], destination[50];
    int durationDays, availableSeats;
    float cost;
} TravelPackage;

void displayPackages(TravelPackage travelPackages[], int packageCount)
{
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < packageCount; i++)
    {
        printf("Package %d:\n", i + 1);
        printf("  > Name: %s\n", travelPackages[i].packageName);
        printf("  Destination: %s\n", travelPackages[i].destination);
        printf("  Duration: %d days\n", travelPackages[i].durationDays);
        printf("  Cost: $%.2f\n", travelPackages[i].cost);
        printf("  Seats: %d\n\n", travelPackages[i].availableSeats);
    }
}

void bookPackage(TravelPackage travelPackages[], int packageCount)
{
    char selectedPackageName[50];
    printf("\nEnter the package name you want to book: ");
    gets(selectedPackageName);

    int isPackageFound = 0;
    for (int i = 0; i < packageCount; i++)
    {
        if (strcmp(travelPackages[i].packageName, selectedPackageName) == 0)
        {
            isPackageFound = 1;
            if (travelPackages[i].availableSeats > 0)
            {
                travelPackages[i].availableSeats--;
                printf("\nBooking confirmed for package: %s\n", travelPackages[i].packageName);
            }
            else
            {
                printf("\nSorry, no seats available for package: %s\n", travelPackages[i].packageName);
            }
            break;
        }
    }

    if (!isPackageFound)
    {
        printf("\nPackage not found.\n");
    }
}

int main()
{
    TravelPackage travelPackages[999];

    int packageCount;
    printf("Enter the number of travel packages: ");
    scanf("%d", &packageCount);
    getchar();

    for (int i = 0; i < packageCount; i++)
    {
        printf("\nEnter details for package %d:\n", i + 1);

        printf("Package name: ");
        gets(travelPackages[i].packageName);

        printf("Destination: ");
        gets(travelPackages[i].destination);

        printf("Duration (in days): ");
        scanf("%d", &travelPackages[i].durationDays);
        getchar();

        printf("Cost: ");
        scanf("%f", &travelPackages[i].cost);
        getchar();

        printf("Seats available: ");
        scanf("%d", &travelPackages[i].availableSeats);
        getchar();
    }

    printf("\nWelcome to the Travel Booking System!\n");
    displayPackages(travelPackages, packageCount);
    bookPackage(travelPackages, packageCount);

    printf("\nUpdated Package List After Booking:\n");
    displayPackages(travelPackages, packageCount);

    return 0;
}
