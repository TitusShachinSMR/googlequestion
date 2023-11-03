#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the sum: ");
    scanf("%d", &x);

    printf("Enter the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int start = 0; // Start of the sliding window
    int end = 0;   // End of the sliding window
    int currentSum = 0;

    while (end < n) {
        // Expand the sliding window to the right
        currentSum += a[end];

        // Check if the current sum is equal to the target sum
        while (currentSum > x) {
            // If the current sum is greater than the target sum, shrink the window from the left
            currentSum -= a[start];
            start++;
        }

        if (currentSum == x) {
            // If the current sum matches the target sum, a subarray is found
            printf("Subarray found from index %d to %d\n", start, end);
            return 0;
        }

        // Move the end of the window to the right
        end++;
    }

    printf("No subarray found with the given sum.\n");
    return 0;
}
