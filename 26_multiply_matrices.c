//C program to multiply two matrices

#include <stdio.h>

int main(){
    
    int rowsA, colsA, rowsB, colsB;
    int A[rowsA][colsA], B[rowsB][colsB], mul[rowsA][colsB];  //declared matrices
    
    //Input numbers of rows and columns of each matrix
    printf("Enter number of rows of matrix A: ");
    scanf("%d", &rowsA);
    printf("\nEnter number of columns of matrix A: ");
    scanf("%d", &colsA);
    printf("Enter number of rows of matrix B: ");
    scanf("%d", &rowsB);
    printf("\nEnter number of columns of matrix B: ");
    scanf("%d", &colsB);
    
    if(colsA!=rowsB){
        printf("\nError! Invalid Orders! Matrix multiplication not possible!\n");
        return 1;
    }
    
    else{
    //take input from user for elements of matrices
    printf("\nEnter elements of Matrix A: " );
    for(int i=0; i<rowsA; i++){
        for(int j=0; j<colsA; j++){
        printf("\nEnter element at position (%d,%d): ", i+1, j+1);
        scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n\nEnter elements of Matrix B: " ); 
    for(int i=0; i<rowsB; i++){
        for(int j=0; j<colsB; j++){
        printf("\nEnter element at position (%d,%d): ", i+1, j+1);
        scanf("%d", &B[i][j]);
        }
    }
    
    //calculate product of matrices
    for(int i=0; i<rowsA; i++){
        for(int j=0; j<colsB; j++){
            for(int k=0; k<colsA; k++){
            mul[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
    
    //Display Matrices
    printf("\n\nDisplaying entered matrix A: \n");
    for(int i=0; i<rowsA; i++){
        for(int j=0; j<colsA; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplaying entered matrix B: \n");
    for(int i=0; i<rowsB; i++){
        for(int j=0; j<colsB; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplaying product of entered matrices: \n");
    for(int i=0; i<rowsA; i++){
        for(int j=0; j<colsB; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    } 
    
    
    return 0;
    }
}
