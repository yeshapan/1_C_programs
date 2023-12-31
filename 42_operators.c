//C program to demonstrate use of &(address of) and *(value at address) operators

#include <stdio.h>

int main() {
    // Declare a variable
    int num = 42;

    // Use the address-of operator (&) to get the address of the variable
    int *ptr = &num;

    // Display the value and address of the variable using variables and pointers
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);  // %p is used for printing addresses

    printf("Value at address using pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", (void*)ptr);

    // Modify the value of the variable using the pointer and the value-at-address operator
    *ptr = 99;

    // Display the updated value of the variable
    printf("Updated value of num: %d\n", num);

    return 0;
}
