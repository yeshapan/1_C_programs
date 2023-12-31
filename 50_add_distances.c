// C program to add two distances

#include <stdio.h>

// Define a structure named 'Distance'
struct Distance {
    int feet;
    float inches;
};

// Function prototype
struct Distance add_distances(struct Distance d1, struct Distance d2);

int main() {
    struct Distance distance1, distance2, sum;

    // Input distance 1
    printf("Enter distance 1:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    // Input distance 2
    printf("\nEnter distance 2:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    // Add the distances
    sum = add_distances(distance1, distance2);

    // Display the result
    printf("\nSum of distances:\n");
    printf("Feet: %d\n", sum.feet);
    printf("Inches: %f\n", sum.inches);

    return 0;
}

// Function to add two distances
struct Distance add_distances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet
    result.feet = d1.feet + d2.feet;

    // Add inches
    result.inches = d1.inches + d2.inches;

    // If the sum of inches exceeds 12, convert excess inches to feet
    while (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}
