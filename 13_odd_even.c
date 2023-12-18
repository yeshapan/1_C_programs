//C program to check if number is even or odd

#include<stdio.h>

int main(){
  int num;
  printf("Enter any integer: ");
  scanf("%d", &num);

  if(num%2==0){
    printf("\nEntered number is even");
  }
  else{
    printf("\nEntered number is odd");
  }

  return 0;
}
