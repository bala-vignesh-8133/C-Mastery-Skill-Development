#include <stdio.h>
int main()
{
    int n = 4;
    for(int row = 0; row < n; row++)
    {
        for(int space = 0; space < n - row - 1; space++)
        {
            printf(" ");
        }
        for(int col = 0; col <= row; col++)
        {
            if(col == 0 || col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(int row = 0; row < n - 1; row++)
    {
        for(int space = 0; space <= row; space++)
        {
            printf(" ");
        }
        for(int col = 0; col < n - row - 1; col++)
        {
            if(col == 0 || col == n - row - 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}