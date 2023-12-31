//C program to store student information using structure

#include <stdio.h>

// Define a structure named 'Student_info'
struct Student_info {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of type 'struct Student_info' to store information for 'n' students
    struct Student_info students[n];

    // Input information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        // Input student name
        printf("Enter name: ");
        scanf("%s", students[i].name);

        // Input roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        // Input marks
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
