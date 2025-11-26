#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask user for number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}