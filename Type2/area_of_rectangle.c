#include <stdio.h>
int area();
int main()
{
    int res = area();
    printf("The area is %d\n", res);
    return 0;
}
int area()
{
    int x, y;
    printf("Enter the length and breadth of rectangle\n");
    scanf("%d %d", &x, &y);
    int result = x * y;
    return result;
}