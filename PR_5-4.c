	#include <stdio.h>

int main()
{
    int rows, cols;
    int target_row, target_col;
    int row_sum = 0, col_sum = 0;

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
    printf("\nEnter row number: ");
    scanf("%d", &target_row);

    printf("Elements of row %d: ", target_row);
    for (int j = 0; j < cols; j++) {
        printf("%d", a[target_row][j]);
        row_sum += a[target_row][j];
        if (j < cols - 1) printf(", ");
    }
    printf("\nThe sum of a row %d: %d\n", target_row, row_sum);

    printf("\nEnter column number: ");
    scanf("%d", &target_col);

    printf("Elements of column %d: ", target_col);
    for (int i = 0; i < rows; i++) {
        printf("%d", a[i][target_col]);
        col_sum += a[i][target_col];
        if (i < rows - 1) printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", target_col, col_sum);

}
/*
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
*/