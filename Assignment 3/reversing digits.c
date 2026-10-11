#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    int last = n % 10;
    return reverse(n / 10, rev * 10 + last);
}
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = reverse(n, 0);
    printf("Reverse = %d", result);
    return 0;
}