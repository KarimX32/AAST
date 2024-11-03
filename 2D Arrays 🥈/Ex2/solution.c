#include <stdio.h>

#define N 5

int main() {
    int arr[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int sum = 0;
    int sum2 = 0;

    
    for(int row = 0; row <= 4; row++) {
        int col = 4 - row;
        sum += arr[row][col];
    }


    for(int row = 0; row <= 4; row++) {
        for(int col = 0; col <= 4; col++) {
            if(row + col > 4) {
                // printf("arr[%d][%d] = %d\n", row, col, arr[row][col]);
                sum2 += arr[row][col];
            }
        }
    }


    printf("SUM OF REVERSE DIAG=%d\n", sum);
    printf("SUM OF THE TRIANGLE=%d\n", sum2);
}
