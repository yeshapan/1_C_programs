// C program to append content at end of file

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char file_name[50], data[100];

    // Input the name of the file
    printf("Enter the name of the file: ");
    scanf("%s", file_name);

    // Open the file in append mode
    file_pointer = fopen(file_name, "a");

    // Check if the file is successfully opened
    if (file_pointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with an error code
    }

    // Input data to be appended to the file
    printf("Enter data to be appended to the file (up to 100 characters):\n");
    scanf("%s", data);

    // Append data to the file
    fprintf(file_pointer, "%s", data);

    // Close the file
    fclose(file_pointer);

    printf("Data has been successfully appended to the file.\n");

    return 0;
}
