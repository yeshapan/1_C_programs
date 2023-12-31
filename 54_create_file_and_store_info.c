// C program to create a file and store information in it

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char file_name[50], data[100];

    // Input the name of the file
    printf("Enter the name of the file: ");
    scanf("%s", file_name);

    // Open the file in write mode
    file_pointer = fopen(file_name, "w");

    // Check if the file is successfully opened
    if (file_pointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with an error code
    }

    // Input data to be stored in the file
    printf("Enter data to be stored in the file (up to 100 characters):\n");
    scanf("%s", data);

    // Write data to the file
    fprintf(file_pointer, "%s", data);

    // Close the file
    fclose(file_pointer);

    printf("Data has been successfully written to the file.\n");

    return 0;
}
