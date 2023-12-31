// C program to read contents from a file

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char file_name[50], ch;

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

    // Read and display contents of the file character by character
    printf("\nContents of the file:\n");
    while ((ch = fgetc(file_pointer)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file_pointer);

    return 0;
}
