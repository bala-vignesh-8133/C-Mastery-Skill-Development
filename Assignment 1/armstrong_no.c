/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int N,rem,sum=0,N1;
    printf("Enter a number: ");
    scanf("%d",&N);
    N1=N;
    while(N1!=0){
        rem=N1%10;
        sum+=rem*rem*rem;
        N1=N1/10;
    }
    if(sum==N){
        printf("Armstrong number");
    }
    else {
        printf("Not Armstrong number");
    }
    return 0;
}