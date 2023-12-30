// C program to show call by value
#include <stdio.h>

//Design user-defined function
void modify_value(int x) {
    printf("Value of number within the function before modification: %d\n", x);

    // Modify thevalue of parameter within the function (local copy)
    x = 20;

    printf("Value of number within the function after modification: %d\n", x);
}

int main() {
    int num;
    //take value of number from user
    printf("Enter any integer: ");
    scanf("%d", &num);

    printf("Value of entered number before function call: %d\n", num);

    // Call the user-defined function (called by value)
    modify_value(num);

    printf("Value of enetered number after function call: %d\n", num);

    return 0;
}


