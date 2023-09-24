#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
   
    double num1;
    double num2;
    int operator;

    printf("Enter your first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for num1.\n");
        return 1;
    }
    printf("Enter your second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for num2.\n");
        return 1;
    }
    printf("Select operator:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    if (scanf("%d", &operator) != 1) {
        printf("Invalid input for operator.\n");
        return 1;
    }
    // printf("Entered calculation is: %d %d %d", num1, operator, num2);

    if (((operator >= 1 && operator <= 4) && (num2 != 0 || operator != 4))){
        if(operator == 1){
            printf("Answer: %f", num1 + num2);
        }
        else if (operator == 2){
            printf("Answer: %f", num1 - num2);
            
        }
        else if (operator == 3){
            printf("Answer: %f", num1 * num2);

        }
        else {
            printf("Answer: %f", num1 / num2);

        }
    }
    else {
        printf("Please insert only numbers and mentioned particular operator");
    }
    return 0;
}