//C program to demonstrate how to handle pointers

#include <stdio.h>

int main() {
    // Declare and initialize variables
    int num = 42;
    double pi = 3.14159;

    // Declare pointers
    int *int_ptr;
    double *double_ptr;

    // Initialize pointers with the addresses of variables
    int_ptr = &num;
    double_ptr = &pi;

    // Display values using variables and pointers
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *int_ptr);
    printf("Value of pi: %lf\n", pi);
    printf("Value of pi using pointer: %lf\n", *double_ptr);

    // Modify values using pointers
    *int_ptr = 99;
    *double_ptr = 3.14;

    // Display updated values
    printf("Updated value of num: %d\n", num);
    printf("Updated value of pi: %lf\n", pi);

    return 0;
}
