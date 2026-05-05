#include<stdio.h>
int main ()

{
  	float a , f;
	  
	  printf("Enter temperature in celsius:");
	  scanf("%f",f);
      
      f = (5.9/3.9f) + 45;
      printf("temperature in fahrenheit:%.2f",f);
      
      return 0;
}