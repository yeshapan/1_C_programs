// C program to calculate sum of 5 objects and calculate their average

# include <stdio.h>

int main(){
    int nums[5]; //declared and initiated array
    int sum=0;
    float avg=0;
    
    //Input elements of array
    for(int i=0; i<5; i++){
        printf("\nEnter integer element number %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    //calculate sum
    for(int i=0; i<5; i++){
        sum+=nums[i];
    }
    
    avg=(float)sum/5;
    
    printf("\nSum of entered numbers is %d", sum);
    printf("\nAverage of entered numbers is %d", avg);
    
    return 0;
}
