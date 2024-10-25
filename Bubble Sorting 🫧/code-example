#include <stdio.h>

int main() {
    int array[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int tmp;

    for(int i = 1; i < 9; i++) {
        for(int j = 0; j < 8; j++) { // 9 - 1 || (n - 1) = 8
            if(array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < 9; i++) printf("%d ", array[i]);
}
