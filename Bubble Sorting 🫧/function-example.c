/**
 * The code defines a function to sort an array of integers in ascending order using bubble sort
 * algorithm and then prints the sorted array.
 * 
 * The `arr` parameter in the `sorting` function is an integer array that holds the elements
 * to be sorted.
 * 
 * The parameter `n` in the `sorting` function represents the number of elements in the array
 * that needs to be sorted. In this specific case, `n` is 9 because the array `array` has 9 elements.
*/

#include <stdio.h>

void sorting(int arr[], int n) {
    int tmp;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int array[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    sorting(array, 9);

    for(int i = 0; i < 9; i++) printf("%d ", array[i]);
}
