#include <stdio.h>
#include <string.h>
void reversed(char str[])
{
    int start = 0, end = strlen(str) - 1;
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char input_str[100];
    printf("Enter a string: ");
    gets(input_str);
    reversed(input_str);
    printf("Reversed string: %s\n", input_str);
    return 0;
}
