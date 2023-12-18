//C program to swap two variables using a third variable

# include <stdio.h>

int main(){
    int x, y, temp=0;
    
    printf("Enter value of first variable x: ");
    scanf("%d", &x);
    printf("\nEnter value of second variable y: ");
    scanf("%d", &y);
    
    temp=x;
    x=y;
    y=temp;
    
    printf("\nAfter swapping:\n");
    printf("Value of x is %d", &x);
    printf("Value of y is %d", &y);
    
    return 0;
}
  
