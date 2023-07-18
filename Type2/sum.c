// sum of two numbers
#include <stdio.h>
int sum();
int main()
{
    int add = sum();
    printf("The sum is %d\n", add);
    return 0;
}
int sum()
{
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    int result = x + y;
    return result;
}