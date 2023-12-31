// C program to update contents of a file

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char file_name[50], data[100];

    // Input the name of the file
    printf("Enter the name of the file: ");
    scanf("%s", file_name);

    // Open the file in read mode
    file_pointer = fopen(file_name, "r");

    // Check if the file is successfully opened
    if (file_pointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with an error code
    }

    // Close the file
    fclose(file_pointer);

    // Open the file in write mode to update its contents
    file_pointer = fopen(file_name, "w");

    // Check if the file is successfully opened
    if (file_pointer == NULL) {
        printf("Error opening file for updating.\n");
        return 1; // Exit program with an error code
    }

    // Input new data to be updated in the file
    printf("Enter updated data for the file (up to 100 characters):\n");
    scanf("%s", data);

    // Write updated data to the file
    fprintf(file_pointer, "%s", data);

    // Close the file
    fclose(file_pointer);

    printf("File has been successfully updated with new data.\n");

    return 0;
}
