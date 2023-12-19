//C proram to find maximum number amogst user-entered elements in an array

#include <stdio.h>

int main() {
    int num[10];//declared array of numbers
    
    printf("Enter elenemts of array: \n" );
    for(int i=0; i<10; i++){
        printf("Enter element number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    //find max
    int max=num[0];
    for(int i=0; i<10; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    
    printf("Maximum number entered is %d", max);

    return 0;
