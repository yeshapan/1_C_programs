// C program to make an array of 10 integers entered by user and print sum and average

#include <stdio.h>

int main() {
    int num[10];//declared array of numbers
    int sum=0;
    float avg=0;
    
    printf("Enter elenemts of array: \n" ); //take elements from user
    for(int i=0; i<10; i++){
        printf("Enter element number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    //calculate sum
    for(int i=0; i<10; i++){
        sum+=num[i];
    }
    
    avg=(float)sum/10;
    
    printf("Elements entered are: \n" );  //display array elements
    for(int i=0; i<10; i++){
        printf("%d\t", num[i]);
    }
    
    printf("\nSum of array elements is %d", sum);
    printf("\nAverage of array elements is %d", avg);

    return 0;
}
