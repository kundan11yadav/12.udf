#include <stdio.h>
void check();
int main()
{
    check();
    return 0;
}
void check()
{
    int n, rev = 0, rem, backup;
    printf("Enter a number:\t");
    scanf("%d", &n);
    backup = n;
    for (int i = 1; i <= n; i++)
    {
        rem = n % 10;
        rev = rev * 10 + rev;
        n = n / 10;
    }
    if (rev == backup)
    {
        printf("The number is palindome.\n");
    }
    else
    {
        printf("The number is not palindrome.\n");
    }
}