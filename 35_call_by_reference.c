//C program to show call by reference

#include <stdio.h>

// Design user-deined function
void modify_value(int *x) {
    // Modify the value at the address pointed to by 'x'
    *x = *x * 2;
}
int main() {
    int num;
    //rake input from user
    printf("Enter any integer: ");
    scanf("%d", &num);

    printf("Original value of entered integer is: %d\n", num);

    // Call user-defined function (called by reference)
    modify_value(&num);

    // Display the modified value after the function call
    printf("Modified value of entered integer is: %d\n", num);

    return 0;
}


