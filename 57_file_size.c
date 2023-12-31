// C program to find size of file using file handling functions 

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char file_name[50];

    // Input the name of the file
    printf("Enter the name of the file: ");
    scanf("%s", file_name);

    // Open the file in binary read mode
    file_pointer = fopen(file_name, "rb");

    // Check if the file is successfully opened
    if (file_pointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with an error code
    }

    // Move the file pointer to the end of the file
    fseek(file_pointer, 0, SEEK_END);

    // Get the size of the file
    long file_size = ftell(file_pointer);

    // Close the file
    fclose(file_pointer);

    // Display the size of the file
    printf("Size of the file \"%s\" is %ld bytes.\n", file_name, file_size);

    return 0;
}
