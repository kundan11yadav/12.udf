#include <stdio.h>
void check_prime_composite();
int main()
{
    check_prime_composite();
    return 0;
}
void check_prime_composite()
{
    int n, i, count;
    printf("Enter the number:\t");
    scanf("%d", &n);
    printf("The factors of %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            // printf(" %d ", i);
            count++;
        }
        // printf("\n");
    }
    if (count == 2)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is composite.\n");
    }
}