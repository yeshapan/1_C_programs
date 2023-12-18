//C Program to swap two variables without using third variable

#include<stdio.h>

int main(){
    int x,y;
    
    printf("Enter value of first variable x: ");
    scanf("%d", &x);
    printf("\nEnter value of second variable y: ");
    scanf("%d", &y);
    
    x=x+y;
    y=x-y;
    x=x-y;
    
    printf("\nAfter swapping: \n");
    printf("Value of x is %d", x);
    printf("\nValue of y is %d",y);
    
    return 0;
}
