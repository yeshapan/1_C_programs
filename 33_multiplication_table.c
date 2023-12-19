//C program to show multiplication table of a number using function

#include <stdio.h>

void table(int x){
    int term;
    for(int i=1; i<=10; i++){
       term=x*i;
       printf("%d*%d=%d\n", x, i, term);
    }
}
int main() {
    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);
    table(num);
    return 0;
}
