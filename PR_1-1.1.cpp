#include <stdio.h>
int main()
 
{
    float celsius, fahrenheit;

    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);
	}
	
/*
      		output
  Enter the temperature in Celsius: 38
  The temperature in Fahrenheit: 100.4
*/