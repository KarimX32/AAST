#include <stdio.h>

int main() {
    int arr[5] = {2, 5, 4, 1, 3};
    int tmp, n = 5;

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

    for(int i = 0; i < 5; i++) 
        printf("%d ", arr[i]);
}
