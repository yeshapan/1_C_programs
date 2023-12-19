// C program to perform arithmetic operations using switch statement

#include <stdio.h>

int main() {
    
    int operation, num1, num2, result;
    float quotient;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    
    printf("\n\nArithmeic Operations: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &operation);
    
    switch(operation){
        case 1:
            result= num1+num2;
            printf("\nSum of %d and %d is %d\n", num1, num2, result);
            break;
        case 2:
            result=num1-num2;
            printf("\nDifference of %d and %d is %d\n", num1, num2, result);
            break;
        case 3:
            result=num1*num2;
            printf("\nProduct of %d and %d is %d\n", num1, num2, result);
            break;
        case 4:
            quotient=(float)num1/num2;
            printf("Quotient of %d divided by %d is %d", num1, num2, quotient);
            break;
        default:
            printf("\nError! Please enter a valid choice!\n");
            break;
    }    
    

    return 0;
}
