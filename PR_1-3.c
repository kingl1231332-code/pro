#include <stdio.h>

int main() 
{
    int first_angle, second_angle, third_angle;

  
    printf("Enter First angle: ");
    scanf("%d", &first_angle);
    printf("Enter Second angle: ");
    scanf("%d", &second_angle);

    
    third_angle = 180 - (first_angle + second_angle);

   
    printf("Third angle: %d\n", third_angle);
}

/*
       output
   Enter First angle: 65
   Enter Second angle: 45
   Third angle: 70
*/