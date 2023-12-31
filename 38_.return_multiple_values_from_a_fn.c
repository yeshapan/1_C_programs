//C program to return more than one value from a function

#include <stdio.h>

// Function to return multiple values using pointers
void get_values(int *value1, int *value2, int *value3) {
    // Assign values to the pointers
    *value1 = 10;
    *value2 = 20;
    *value3 = 30;
}

int main() {
    int num1, num2, num3;

    // Call the function and pass the addresses of variables to store the values
    get_values(&num1, &num2, &num3);

    // Display the values obtained from the function
    printf("Value 1: %d\n", num1);
    printf("Value 2: %d\n", num2);
    printf("Value 3: %d\n", num3);

    return 0;
}
