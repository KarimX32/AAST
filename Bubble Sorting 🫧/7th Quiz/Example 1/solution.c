#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

void sorting(int arr[], int size) {
    int tmp;
    for(int i = 1; i < size; i++) {
        for(int j = 0; j < size-1; j++) {
            if(sumOfDigits(arr[j]) < sumOfDigits(arr[j + 1])) { // 5ali balko this is < not > (3shn its from the largest to the smallest)
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}


/**
---THIS IS A TEST CODE (IF U WANT TO TEST WITH SMALL NUMBERS)---
=============================================================================
    int arr[10] = {45, 145, 89, 88, 105, 231, 1111, 8, 202, 23};
    sorting(arr, 10);
    printf("Sorted array based on sum of digits:\n");
    for(int i = 0; i < 10; i++) printf("%d\t", arr[i]);
=============================================================================
*/


int main() {

    int arr[100];

    printf("Enter the numbers: ");
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
    }

    sorting(arr, 100);

    printf("Sorted array based on sum of digits:\n");
    for(int i = 0; i < 100; i++) printf("%d\t", arr[i]);

    return 0;
}
