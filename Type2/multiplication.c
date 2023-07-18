#include <stdio.h>
int table();
int main()
{
    int x = table();
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", x, i, x * i);
    }

    return 0;
}
int table()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    return n;
}