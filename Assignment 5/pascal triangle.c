#include <stdio.h>
int main()
{
    int n = 5;
    for(int row = 0; row < n; row++)
    {
        for(int space = 0; space < n - row - 1; space++)
        {
            printf("  ");
        }
        int num = 1;
        for(int col = 0; col <= row; col++)
        {
            printf("%d   ", num);
            num = num * (row - col) / (col + 1);
        }
        printf("\n");
    }
    return 0;
}