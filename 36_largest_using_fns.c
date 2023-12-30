// C program to find largest among two numbers using functions

#include <stdio.h>
void maximum(int x, int y){
  if(x>y){
      int max = x;
  }
  else{
      int max = y;
  }
  printf("Maxium of entered numbers is: %d\n", max);
}

int main(){
  int num1, num2;

  //take input numbers from user
  printf("Enter first integer: ");
  scanf("%d", &num1);
  printf("\nEnter second integer: ");
  scanf("%d", &num2);

  //call user-defined function
  maximum(num1, num2);

  return 0;

}
