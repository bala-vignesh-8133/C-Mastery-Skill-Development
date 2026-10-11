#include <stdio.h>

int main()
{
    int n = 7;
    for(int row = 0; row <= n / 2; row++)
    {
        for(int space = 0; space < row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < n - 2 * row; col++)
        {
            printf("* ");
        }
    printf("\n");
    }
    for(int row = n / 2 - 1; row >= 0; row--)
    {
        for(int space = 0; space < row; space++)
        {
            printf("  ");
        }
        for(int col = 0; col < n - 2 * row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}