#include <stdio.h>

int main() 

{
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int largest = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d\n", largest);

}

/*
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 3
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

The largest element is: 9
*/