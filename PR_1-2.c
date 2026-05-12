#include <stdio.h>
int main() 

{
    float base_salary, hra_percent, da_percent, ta_percent, gross_salary;

    
    printf("Enter Base Salary: ");
    scanf("%f", &base_salary);
    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);
    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);
    printf("Enter TA percentage: ");
    scanf("%f", &ta_percent);

   
    gross_salary = base_salary + (base_salary * hra_percent / 100) 
                               + (base_salary * da_percent / 100) 
                               + (base_salary * ta_percent / 100);

   
    printf("Gross Salary: Rs. %.0f\n", gross_salary);
}

/* 
     output
 Enter Base Salary: 100
 Enter HRA percentage: 10
 Enter DA percentage: 5
 Enter TA percentage: 8
 Gross Salary: Rs. 123
*/