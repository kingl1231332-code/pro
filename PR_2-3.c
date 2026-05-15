#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 80) {
        grade = 'A';
        printf("Your grade is %c. Excellent work!\n", grade);
    } else if (score >= 70) {
        grade = 'B';
        printf("Your grade is %c. Well done!\n", grade);
    } else if (score >= 60) {
        grade = 'C';
        printf("Your grade is %c. Good job!\n", grade);
    } else if (score >= 50) {
        grade = 'D';
        printf("Your grade is %c. You passed!\n", grade);
    } else {
        grade = 'F';
        printf("Your grade is %c. Better luck next time.\n", grade);
    }

    if (grade >= 'A' && grade <= 'D') {
        printf("Congratulations! You are eligible for the next level\n");
    } else {
        printf("Please try again next time\n");
    }

}
/*
Enter your score: 85
Your grade is A. Excellent work!
Congratulations! You are eligible for the next level
*/