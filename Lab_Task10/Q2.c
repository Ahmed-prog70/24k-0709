#include <stdio.h>
#include <math.h>
typedef struct
{
    int x,y;
} Point;
float distance(Point p1, Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int check_rect(Point p, Point topLeft, Point bottomRight)
{
    return (p.x >= topLeft.x && p.x <= bottomRight.x &&
            p.y <= topLeft.y && p.y >= bottomRight.y);
}
int main()
{
    Point p1, p2, p, topLeft, bottomRight;
    printf("Enter coordinates of first point : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter coordinates of second point : ");
    scanf("%d %d", &p2.x, &p2.y);
    float dist = distance(p1, p2);
    printf("Distance between points: %.2f\n", dist);
    printf("Enter top-left corner of rectangle : ");
    scanf("%d %d", &topLeft.x, &topLeft.y);
    printf("Enter bottom-right corner of rectangle : ");
    scanf("%d %d", &bottomRight.x, &bottomRight.y);
    printf("Enter point (x y): ");
    scanf("%d %d", &p.x, &p.y);
    if (check_rect(p, topLeft, bottomRight))
    {
        printf("Inside rectangle.\n");
    }
    else
    {
        printf("Outside rectangle.\n");
    }
    return 0;
}
