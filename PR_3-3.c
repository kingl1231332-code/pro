#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and the last digit: %d\n", sum);

}
/*
        output
        Enter any number: 384
The sum of the first and the last digit: 7
*/