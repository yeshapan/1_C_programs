//C program to demonstrate how same name variable can be used in different functions

#include <stdio.h>

// Function declaration
void function1();
void function2();

int main() {
    // Call functions
    function1();
    function2();

    return 0;
}

void function1() {
    // Declare a variable with the same name in function1
    int num = 10;

    // Print the value of num in function1
    printf("Value of num in function1: %d\n", num);
}

void function2() {
    // Declare a variable with the same name in function2
    int num = 20;

    // Print the value of num in function2
    printf("Value of num in function2: %d\n", num);
}
