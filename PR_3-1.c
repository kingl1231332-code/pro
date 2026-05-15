#include <stdio.h>

int main() {
    char ch = 'a';

    printf("Output: ");
    do {
        printf("%c", ch);
        ch = ch + 4; 
        
        if (ch <= 'z') {
            printf(", ");
        }
    } while (ch <= 'z');

}
/*
 output
  a, e, i, m, q, u, y

*/