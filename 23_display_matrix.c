//C program to display matrix

#include <stdio.h>

int main(){
    
    int rows, cols;
    int num[rows][cols];//declared matrix
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter number of columns: ");
    scanf("%d", &cols);
    
    printf("\nEnter elements of array: " );
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
        printf("\nEnter element at position (%d,%d): ", i+1, j+1);
        scanf("%d", &num[i][j]);
        }
    }
    
    //Display Matrix
    printf("\nDisplaying entered matrix: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
