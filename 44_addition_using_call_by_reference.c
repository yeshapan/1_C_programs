 //C program to add two numbers using call by reference

#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Add numbers using pointers (call by reference)
    *sum = *num1 + *num2

    // Display result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
