#include <stdio.h>

int main() {
    int i, j, s;
    int total_rows = 5;
    
    for(i = 1; i <= total_rows; i++) {

        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for(s = 1; s <= (total_rows - i) * 2; s++) {
            printf("  ");
        }
        
        for(j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
/*
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/