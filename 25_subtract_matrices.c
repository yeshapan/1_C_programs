//C program to subtract two matrices
#include <stdio.h>

int main(){
    
    int rows, cols;
    int A[rows][cols], B[rows][cols], sub[rows][cols];  //declared matrices
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter number of columns: ");
    scanf("%d", &cols);
    
    //take input from user for elements of matrices
    printf("\nEnter elements of Matrix A: " );
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
        printf("\nEnter element at position (%d,%d): ", i+1, j+1);
        scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n\nEnter elements of Matrix B: " ); 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
        printf("\nEnter element at position (%d,%d): ", i+1, j+1);
        scanf("%d", &B[i][j]);
        }
    }
    
    //calculate difference of matrices
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sub[i][j]= A[i][j]-B[i][j];
        }
    }
    
    //Display Matrices
    printf("\n\nDisplaying entered matrix A: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplaying entered matrix B: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplaying difference of entered matrices: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    } 
    
    
    return 0;
}
