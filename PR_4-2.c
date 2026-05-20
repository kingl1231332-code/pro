#include <stdio.h>

int main() {
    int i, j;
    int count = 11;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}
/*
11
12 13
14 15 16
17 18 19 20
*/