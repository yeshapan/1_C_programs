// C program to copy one string into another and count number of characters occupied


#include <stdio.h>
#include<string.h>

int main() {
    char original[100], copy[100];      //declared a character array of 100 capacity
    int length;
    
    printf("Enter any string: ");
    gets(original);
    
    length=strlen(original);
    
    //copy string character by character
    for(int i=0; i<length; i++){
        copy[i]=original[i];
    }
    
    printf("\nCopied string is: %s", copy);
    printf("\nLength of string is: %d",length);

    return 0;
}
