#include <stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &a, &b);
    int add = a + b;
    printf("The sum is %d.\n", add);
}