#include <stdio.h>
int main()
{
    float x1 = 5, x2 = 3, y1 = 4, y2 = 2;
    float slope;
    slope= (y2-y1)/(x2-x1);
    printf("The slope of the points (5,4) and (3,2) is: %.3f", slope);
    return 0; 
}