#include <stdio.h>
#include <string.h>
typedef struct
{
    char title[20], author[20];
    int publicationYear;
    float price;
} Book;

void displayBooks(Book library[], int bookCount)
{
    printf("\nAll Books in the Library:\n");
    for (int i = 0; i < bookCount; i++)
    {
        printf("\nTitle: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Publication Year: %d\n", library[i].publicationYear);
        printf("Price: %.2f\n", library[i].price);
    }
}

void searchBookByTitle(Book library[], int bookCount, char searchTitle[])
{
    int isFound = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, searchTitle) == 0)
        {
            printf("\nBook found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Publication Year: %d\n", library[i].publicationYear);
            printf("Price: %.2f\n", library[i].price);
            isFound = 1;
            break;
        }
    }
    if (!isFound)
    {
        printf("\nBook with title '%s' not found.\n", searchTitle);
    }
}

void searchBooksByAuthor(Book library[], int bookCount, char searchAuthor[])
{
    int isFound = 0;
    printf("\nBooks by %s:\n", searchAuthor);
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].author, searchAuthor) == 0)
        {
            printf("Title: %s\n", library[i].title);
            printf("Publication Year: %d\n", library[i].publicationYear);
            printf("Price: %.2f\n", library[i].price);
            isFound = 1;
        }
    }
    if (!isFound)
    {
        printf("No books found by %s.\n", searchAuthor);
    }
}
int main()
{
    Book library[999];
    int bookCount;
    printf("Enter the number of books: ");
    scanf("%d", &bookCount);
    getchar();
    for (int i = 0; i < bookCount; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Title: ");
        gets(library[i].title);

        printf("Author: ");
        gets(library[i].author);

        printf("Publication Year: ");
        scanf("%d", &library[i].publicationYear);

        printf("Price: ");
        scanf("%f", &library[i].price);
        getchar();
    }

    displayBooks(library, bookCount);
    char searchTitle[100];
    printf("\nEnter the title to search for: ");
    gets(searchTitle);
    searchBookByTitle(library, bookCount, searchTitle);

    char searchAuthor[100];
    printf("\nEnter the author to list books by: ");
    gets(searchAuthor);
    searchBooksByAuthor(library, bookCount, searchAuthor);
    return 0;
}
