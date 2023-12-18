//C program to find sum of two numbers
#include <stdio.h>

int main(){
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    
    sum=num1+num2;
    
    printf("\nSum of %d and %d is %d", num1, num2, sum);
    
    return 0;
}
