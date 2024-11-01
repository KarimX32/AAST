// print the array in a spiral form

#include <stdio.h>

void main() {
    // Initialize a 5x5 2D array with given values
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };

    // Initialize the starting and ending indices for rows and columns
    int rowStart = 0, colStart = 0, rowEnd = 5, colEnd = 5;

    // Loop until the starting indices are less than the ending indices
    while(rowStart < rowEnd && colStart < colEnd) {
        
        // Print the top row from left to right
        for(int i = colStart; i < colEnd; i++) {
            printf("%d ", arr[rowStart][i]);
        }
        rowStart++; // Move the starting row index down

        // Print the right column from top to bottom
        for(int i = rowStart; i < rowEnd; i++) {
            printf("%d ", arr[i][colEnd-1]);
        }
        colEnd--; // Move the ending column index left

        // Check if there are remaining rows to print
        if(rowStart < rowEnd) {
            // Print the bottom row from right to left
            for(int i = colEnd-1; i >= colStart; i--) {
                printf("%d ", arr[rowEnd-1][i]);
            }
            rowEnd--; // Move the ending row index up
        }

        // Check if there are remaining columns to print
        if(colStart < colEnd) {
            // Print the left column from bottom to top
            for(int i = rowEnd-1; i >= rowStart; i--) {
                printf("%d ", arr[i][colStart]);
            }
            colStart++; // Move the starting column index right
        }
    }
}
