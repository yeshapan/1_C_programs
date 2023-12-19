//C program to display first 15 natural numbers and their sum using for loop

#include<stdio.h>

int main(){
    int sum=0; 
    
    printf("First 15 natural numbers are: \n");
        for(int i=1; i<=15; i++){
        printf("%d\t",i);
    }
    
    //calculate sum
    for(int i=1; i<=15; i++){
        sum+=i;
    }
    printf("\nSum of first 15 natural numbers is %d\n", sum);
    
    return 0;
}
