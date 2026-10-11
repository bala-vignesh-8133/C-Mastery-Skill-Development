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
    int characterFrequencyMap[256] = {0};
    int stringLength = strlen(inputString);
    for (int i = 0; i < stringLength; i++) {
        characterFrequencyMap[(unsigned char)inputString[i]]++;
    }
    int isUniqueCharacterFound = 0;
    for (int i = 0; i < stringLength; i++) {
        if (characterFrequencyMap[(unsigned char)inputString[i]] == 1) {
            printf("%c\n", inputString[i]);
            isUniqueCharacterFound = 1;
            break;
        }
    }
    if (!isUniqueCharacterFound) {
        printf("-1\n");
    }
    return 0;
}