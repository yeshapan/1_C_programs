//C program to check if entered number is prime or not

#include <stdio.h>

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    
    if(num<1){
        printf("%d is not a prime number.\n", num);
        return 0;
      }

    if(num==1){
      printf("1 is neither prime nor composite\n");
      return 0;
      }

    for(i = 2; i*i<=num; i++){
                if(num % i == 0){
                  flag = 1;
                  break;
        }
    }

    if (flag == 0){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
