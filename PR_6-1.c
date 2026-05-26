#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1; 
    int frequency[256] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

   
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }


    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }


    for (int i = 0; i < length; i++) {
        frequency[(unsigned char)str[i]]++;
    }


    printf("\nFrequency of each letter:\n");
    for (int i = 0; i < length; i++) {

        if (frequency[(unsigned char)str[i]] > 0) {
            printf("%c => %d\n", str[i], frequency[(unsigned char)str[i]]);

            frequency[(unsigned char)str[i]] = 0; 
        }
    }

}