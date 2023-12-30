 // C program to demonstrate string handling

#include <stdio.h>
#include<string.h>

int main() {
   char original_str[100], copy_str[100], concat_str[100];
   int len;
   
   //take input string from user
   printf("Enter any string: ");
   gets(original_str);
   
   printf("\n Original string entered is: %s\n", original_str);
   
   //calculate string length
   len=strlen(original_str);
   printf("Length of entered string is %d\n", len);
   
   //copy string
   strcpy(copy_str, original_str);
   printf("Copied string is: %s\n", copy_str);
   
   //take input of another string for concatenation
   printf("\nEnter another string: ");
   gets(concat_str);
   
   //concatenate string
   strcat(original_str, concat_str);
   printf("Concatenated string is: %s", original_str);

    return 0;
}
