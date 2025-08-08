#include <stdio.h>

// Function to calculate sum of even numbers
int sumEven(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Function to calculate sum of odd numbers
int sumOdd(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSum of even numbers = %d", sumEven(arr, n));
    printf("\nSum of odd numbers = %d\n", sumOdd(arr, n));

    return 0;
}
