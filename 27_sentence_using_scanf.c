//C program to read a series of words using scanf() function

#include <stdio.h>

int main() {
    char str[100];      //declared a character array of 100 capacity
    
    printf("Enter any string: ");
    scanf("%[\^n]s", &str);     //scanf will keep reading till newline comes at end of sentence
    
    printf("Entered string is: %s", str);

    return 0;
}
