#include<stdio.h>
int main ()

 {
    int num;
    unsigned long long factorial = 1; 

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
  
    }

    if (num < 1)
	
	 {
        printf("Factorial of a negative number doesn't exist.");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }

}
/*
Enter an integer: 5
Factorial of 5 = 120

*/