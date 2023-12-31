// C program to demonstrate how pointers can be used to create and access structures

#include <stdio.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a pointer to a structure of type 'Person'
    struct Person *ptr_Person;

    // Dynamically allocate memory for a 'Person' structure using malloc
    ptr_Person = (struct Person *)malloc(sizeof(struct Person));

    // Check if memory allocation is successful
    if (ptr_Person == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit program with an error code
    }

    // Input data for the person using the pointer
    printf("Enter name: ");
    scanf("%s", ptr_Person->name);

    printf("Enter age: ");
    scanf("%d", &(ptr_Person->age));

    // Display the information using the pointer
    printf("\nDetails of the person:\n");
    printf("Name: %s\n", ptr_Person->name);
    printf("Age: %d\n", ptr_Person->age);

    // Free the allocated memory
    free(ptr_Person);

    return 0;
}
