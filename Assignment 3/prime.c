/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if (n%i==0){
        count++;}
    }
    if (count==2){
        printf("It is a Prime Number");
    }
    else {
        printf("It is not a Prime Number");
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}