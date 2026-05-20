#include <stdio.h>

int main() {
    int i, j, s;
    for(i = 5; i >= 2; i--) {

        for(s = 5; s > i; s--) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            if(j % 2 != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
/*
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
*/