#include <stdio.h>

int main() 
{
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNegative elements from an Array: ");
    int first = 1; 
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            if (!first) {
                printf(", ");
            }
            printf("%d", a[i]);
            first = 0;
        }
    }
    printf("\n");

}
/*
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3-5
a[4] =
Negative elements from an Array: -4, -3, -5

*/