//C program to find simple interest

#include<stdio.h>
int main(){
    float prin, rate, time, si;
    
    printf("Enter principal amount: ");
    scanf("%f", &prin);
    printf("\nEnter rate of interest: ");
    scanf("%f", &rate);
    printf("\nEnter time in years: ");
    scanf("%f", &time);
    
    si=(prin*rate*time)/100;
    
    printf("\nSimple interest calculated is %f", si);
    
    return 0;
}
