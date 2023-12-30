 // C program to swap two numbers using functions

#include <stdio.h>

void swap(int num1, int num2){
       int temp=num1;
       num1=num2;
       num2=temp;
       
       printf("After swapping:\n");
       printf("Value of first number is %d", num1);
       printf("\nValue of second number is %d", num2);
   }
   
int main() {
   int x, y;
   
   //take input numbers from user
   printf("Enter first number x: ");
   scanf("%d", &x);
   printf("\nEnter second number y: ");
   scanf("%d", &y);
   
   //call user-defined function
   swap(x,y);
   
       return 0;
}
