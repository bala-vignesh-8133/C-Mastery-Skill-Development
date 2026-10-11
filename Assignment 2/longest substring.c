/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int expandAroundCenter(char *inputString, int leftPointer, int rightPointer) {
    int left = leftPointer;
    int right = rightPointer;
    int stringLength = strlen(inputString);
    while (left >= 0 && right < stringLength && inputString[left] == inputString[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

int main() {
    char inputString[1000];
    scanf("%s", inputString);
    int palindromeStart = 0;
    int palindromeEnd = 0;
    int stringLength = strlen(inputString);
    for (int i = 0; i < stringLength; i++) {
        int oddLengthPalindrome = expandAroundCenter(inputString, i, i);
        int evenLengthPalindrome = expandAroundCenter(inputString, i, i + 1);
        int maximumLength = oddLengthPalindrome > evenLengthPalindrome ? oddLengthPalindrome : evenLengthPalindrome;
        if (maximumLength > palindromeEnd - palindromeStart) {
            palindromeStart = i - (maximumLength - 1) / 2;
            palindromeEnd = i + maximumLength / 2;
        }
    }
    for (int i = palindromeStart; i <= palindromeEnd; i++) {
        printf("%c", inputString[i]);
    }
    printf("\n");
    return 0;
}