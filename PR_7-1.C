#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);

int main() {
    int choice;
    int num1, num2;

    while (1) {
      
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        if (choice == 0) {
            break; 
        } else if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option from the menu.\n");
            continue;
        }


        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
             
                if (num2 == 0) {
                    printf("Error: Division by zero is undefined!\n");
                } else {
                    printf("Division of %d and %d is %.0f\n", num1, num2, divide(num1, num2));
                }
                break;
            case 5:
             
                if (num2 == 0) {
                    printf("Error: Modulo by zero is undefined!\n");
                } else {
                    printf("Modulo of %d and %d is %d\n", num1, num2, modulo(num1, num2));
                }
                break;
        }
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b; 
}

int modulo(int a, int b) {
    return a % b;
}
/*
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/