//C program to find area and circumference of a circle

#include<stdio.h>
#define PI 3.1415926
int main(){
    float pi=3.1415926;
    float r, area, circum;
    
    printf("Enter radius of circle:");
    scanf("%f", &r);
    
    area=pi*r*r;
    circum=2*pi*r;
    
    printf("\nCircumference of circle is: %f", circum);
    printf("\nArea of circle is: %f", area);

    return 0;
}
