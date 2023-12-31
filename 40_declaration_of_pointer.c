// C program to demonstrate basic declaration of a pointer

#include <stdio.h>

int main() {
    // Declare a variable
    int num = 42;

    // Declare a pointer and initialize it with the address of the variable
    int *ptr = &num;

    // Display the value of the variable using both the variable and the pointer
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);

    // Modify the value of the variable using the pointer
    *ptr = 99;

    // Display the updated value of the variable
    printf("Updated value of num: %d\n", num);

    return 0;
}
