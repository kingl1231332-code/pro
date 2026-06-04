#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two integers to swap:");
    printf("Num 1: ");
    scanf("%d", &num1);
    printf("Num 2: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: Num 1 = %d, Num 2 = %d", num1, num2);

 
    swap(&num1, &num2); 

    printf("After swapping:  Num 1 = %d, Num 2 = %d", num1, num2);
}
/*Enter two integers to swap:Num 1: 1
Num 2: 5

Before swapping: Num 1 = 1, Num 2 = 5
After swapping:  Num 1 = 5, Num 2 = 1
*/