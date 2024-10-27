#include <stdio.h>

int main() {
    int n = 10;
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    int target = 7,
    start = 0,
    end = n - 1,
    mid = (start + end) / 2;

    // COUNTING COMPARISONS IS FOR YOU BAS, ITS NOT NECESSARY.
    int comparisons = 1;

    while (start <= end) {
        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        comparisons++; // OPTIONAL IF U WANNA KEEP TRACK OF COMPARISONS
    }

    printf("Total comparisons: %d\n", comparisons); // OPTIONAL
}
