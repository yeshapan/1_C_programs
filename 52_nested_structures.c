// C program to demonstrate nested structures

#include <stdio.h>

// Define a structure named 'Address' for storing address information
struct Address {
    char street[50];
    char city[50];
    char state[50];
};

// Define a structure named 'Person' with a nested 'Address' structure
struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Input data for the person
    printf("Enter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    // Input address information using nested structure
    printf("\nEnter address details:\n");
    printf("Street: ");
    scanf("%s", person1.address.street);

    printf("City: ");
    scanf("%s", person1.address.city);

    printf("State: ");
    scanf("%s", person1.address.state);

    // Display the information using nested structure
    printf("\nDetails of the person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address:\n");
    printf("Street: %s\n", person1.address.street);
    printf("City: %s\n", person1.address.city);
    printf("State: %s\n", person1.address.state);

    return 0;
}
