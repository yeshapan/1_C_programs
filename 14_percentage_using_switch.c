//C program to display percentage of student

#include <stdio.h>

int main() {
    
    float percent;

    printf("Enter the percentage obtained by the student: ");
    scanf("%f", &percent);

    // Calculate percentage using switch statement
    switch ((int)percent / 10) {
        case 10:
            printf("Congrats! A1 grade obtained!");
            break;
        case 9:
            printf("Good! A2 grade obtained!");
            break;
        case 8:
            printf("B1 grade obtained!");
            break;
        case 7:
            printf("B2 grade obtained!");
            break;
        case 6:
            printf("C grade obtained!");
            break;
        case 5:
            printf("D grade obtained!");
            break;
        case 4:
            printf("Failed");
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Might as well commit suicide tbh");
            break;
        default:
            printf("Invalid marks\n");
            return 1;
    }


    return 0;
}
