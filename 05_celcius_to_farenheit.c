//C program to covert degree centigrade to degree farenheit

#include<stdio.h>
int main(){
    float cel, faren;
    printf("Enter temperature in degree celcuis: ");
    scanf("%f", &cel);
    
    faren=((cel*9/5)+32);
    
    printf("\n%f degree celcuis equals %f degree farenheit\n", cel, faren);
    
    return 0;
}
