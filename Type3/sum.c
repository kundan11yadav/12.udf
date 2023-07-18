#include <stdio.h>
void sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter the numbers:\n");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}
void sum(int x, int y)
{
    int add;
    add = x + y;
    printf("The sum is %d", add);
}