// function with return value and no  argument
#include <stdio.h>
int odd_even();
int main()
{
    int value = odd_even();
    if (value == 0)
    {
        printf("The number is number.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    return 0;
}
int odd_even()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d ", &n);
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
