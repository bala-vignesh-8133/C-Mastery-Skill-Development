/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num,res=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            res+=i;
        }
    }
    if(res==num){
        printf("Perfect number");
    }
    else{
        printf("Not Perfect Number");
    }
    return 0;
}