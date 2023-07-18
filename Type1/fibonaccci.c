#include <stdio.h>
void series();
int main()
{
    series();
    return 0;
}
void series()
{
    int a = 0, b = 1, temp, range;
    printf("Enter range upto which you want to display: ");
    scanf("%d", &range);
    printf("\nThe Fibonacci series is: \n");
    while (a <= range)
    {
        printf("%d\t", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}
