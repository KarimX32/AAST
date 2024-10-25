/**
 * The above code defines a function to sort an array of integers using selection sort algorithm and
 * then prints the sorted array.
 * 
 * The parameter `arr` in the `sorting` function is an integer array that holds the elements
 * to be sorted. In the `main` function, the array `array` is initialized with values {2, 5, 4, 1, 3}
 * and passed to the `sorting
 * 
 * The parameter `n` in the `sorting` function represents the number of elements in the array
 * that needs to be sorted. In this case, `n` is the total number of elements in the `array` that is
 * passed to the `sorting` function. In the provided code snippet, `
 */


#include <stdio.h>

void sorting(int arr[], int n) {
    int tmp;
    for(int j = 0; j < n - 1; j++) {
        int iMin = j;

        for(int i = j + 1; i < n; i++) {
            if(arr[i] < arr[iMin])
                iMin = i;
        }

        if(iMin != j) {
            tmp = arr[j];
            arr[j] = arr[iMin];
            arr[iMin] = tmp;
        }
    }
}

int main() {
    int array[5] = {2, 5, 4, 1, 3};

    sorting(array, 5);

    for(int i = 0; i < 5; i++) 
        printf("%d ", array[i]);
}
