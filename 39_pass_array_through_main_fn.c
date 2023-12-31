//C program to pass an array through main function to display function

#include <stdio.h>

// Function prototype
void display_array(int arr[], int size);

int main() {
    // Declare and initialize an example array
    int sample_array[] = {1, 2, 3, 4, 5};

    // Get the size of the array
    int size = sizeof(sample_array) / sizeof(sample_array[0]);

    // Call the display_array function and pass the array and its size
    display_array(sample_array, size);

    return 0;
}

// Function to display the elements of an array
void display_array(int arr[], int size) {
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
