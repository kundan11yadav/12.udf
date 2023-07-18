#include <stdio.h>
void mult_table();
int main()
{
    mult_table();
    return 0;
}
void mult_table()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, i * n);
    }
}