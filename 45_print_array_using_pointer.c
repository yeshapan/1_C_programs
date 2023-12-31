// C program to store n elements in an array and print the elements using pointer

#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int array[n];

    // Input elements into the array
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the elements using a pointer
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        // Use the pointer to access elements and print them
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

    return 0;
}
