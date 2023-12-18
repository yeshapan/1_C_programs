//C program to find reverse of a number

# include <stdio.h>

int main(){
    int num, rev=0, remain;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    
    while(num!=0){
        remain=num%10;
        rev=(rev*10)+remain;
        num=num/10;
    }
    
    printf("\nReversed number is %d", rev);
    
    return 0;
    
}
