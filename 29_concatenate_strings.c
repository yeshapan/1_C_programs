// C program to concatenate two strings
#include <stdio.h>
#include<string.h>

int main() {
    char str1[300], str2[100];      //declared a character array of 100 capacity
    int len1, len2;
    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    //concatente strings
    strcat(str1, str2);
    
    printf("\nConcatenated string is: %s", str1);
    
    return 0;
}
