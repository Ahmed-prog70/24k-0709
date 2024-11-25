#include <stdio.h>
#include <string.h>
void printArray(int array[], int length, int index)
{
    if (index >= length)
        return;
    printf("%d ", array[index]);
    printArray(array, length, index + 1);
}
int main()
{
    int numbers[] = {0, 3, 7, 2, 5, 1};
    int startIndex = numbers[0];
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, arraySize, startIndex);
}
