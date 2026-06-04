#include <stdio.h>

int main() {
    int rows = 5;

    for (int b = 1; b <= rows; b++) {
       
        for (int c = 1; c <= rows - b; c++) {
            printf(" ");
        }
        
        
        for (int a = 1; a <= b; a++) {
            printf("8");
        }
        
      
        printf("\n");
    }

}
/*   8
   88
  888
 8888
88888

----
*/