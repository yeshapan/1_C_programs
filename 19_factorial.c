//C program to print factorial of a number

#include<stdio.h>

int main(){
    int num, fact;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    
    if (num<0){
        printf("Error! Factorial of negative numbers not possible.\n");
        return 1;
    }
    
    
    else if(num==0){
        fact==1;
    }
    
    else{
        for(int i=num; i>0; i--){
            fact*=1;
        }
        printf("\nFactorial of %d is %d\n", num, fact);
        return 0;
    }
