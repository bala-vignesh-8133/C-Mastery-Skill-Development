#include <stdio.h>
int digit_count(int n, int digit)
{
    if (n == 0)
    {
        return 0;
    }
    int last = n % 10;
    if (last == digit)
    {
        return 1 + digit_count(n / 10, digit);
    }
    else
    {
        return digit_count(n / 10, digit);
    }
}
int main()
{
    int n, digit, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    count = digit_count(n, digit);
    printf("The digit occurs %d times", count);
    return 0;
}