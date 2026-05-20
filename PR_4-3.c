 #include <stdio.h>

int main() {
    int i, j, s;
    for(i = 5; i >= 1; i--) {

        for(s = 1; s < i; s++) {
            printf("  ");
        }
        for(j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
} 
/*
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0

--
*/