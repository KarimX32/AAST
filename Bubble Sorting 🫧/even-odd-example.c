/**
 * The main function sorts an array of integers into two separate arrays based on whether the elements
 * are even or odd, and then prints the sorted even and odd arrays.
 * 
 * The `arr` parameter in the `sorting` function represents an array of integers that needs
 * to be sorted in ascending order. The function uses the Bubble Sort algorithm to sort the array.
 * 
 * The parameter `n` in the `sorting` function represents the number of elements in the array
 * that needs to be sorted. In this specific case, `n` is the number of elements in the input array
 * that is passed to the `sorting` function for sorting.
*/


////// EXERCISE 1 //////
/**************************************************************
 * display the even numbers sorted then display the odd numbers sorted
 * you don't know how many numbers are even or odd
 * use bubble sort
***************************************************************/

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
    int even = 0, odd = 0;

    for(int i = 0; i < 9; i++) {
        if(array[i] % 2 == 0) even++;
        else odd++;
    }

    int evenArray[even], oddArray[odd];
    int e = 0, o = 0;

    for(int i = 0; i < 9; i++) {
        if(array[i] % 2 == 0) {
            evenArray[e] = array[i];
            e++;
        } else {
            oddArray[o] = array[i];
            o++;
        }
    }

    sorting(evenArray, even);
    sorting(oddArray, odd);

    for(int i = 0; i < even; i++) {
        printf("%d ", evenArray[i]);
    }

    for(int i = 0; i < odd; i++) {
        printf("%d ", oddArray[i]);
    }
}
