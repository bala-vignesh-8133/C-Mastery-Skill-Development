/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    scanf("%s", inputString);
    
    int hashSet[256] = {0}; 
    int stringLength = strlen(inputString);
    
    for (int i = 0; i < stringLength; i++) {
        int asciiValue = (unsigned char)inputString[i];
        
        if (hashSet[asciiValue] == 0) {
            hashSet[asciiValue] = 1;
            printf("%c", inputString[i]);
        }
    }
    
    printf("\n");
    return 0;
}