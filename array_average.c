#include <stdio.h>

// Function to calculate average of array elements
float calculateAverage(int arr[], int size) {
    int sum = 0;

    // Loop through the array to calculate the sum
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Return average
    return (float)sum / size;
}

int main() {
    int numbers[5];
    int i;

    // Input elements from the user
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Call the function and print the result
    float avg = calculateAverage(numbers, 5);
    printf("Average = %.2f\n", avg);

    return 0;
}
