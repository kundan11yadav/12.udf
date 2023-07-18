#include <stdio.h>
void area();
int main()
{
    area();
    return 0;
}
void area()
{
    int l, b;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%d %d", l, b);
    int result = l * b;
    printf("The area of rectangle is %d", result);
}