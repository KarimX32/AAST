//#include <stdio.h>
//#include <stdlib.h>
//
//
//void calculateGPAStats(float* array, int size, float* highest, float* lowest, float* average) {
//    *highest = array[0];
//    *lowest = array[0];
//    *average = 0.0;
//
//    for (int i = 0; i < size; i++) {
//        if (array[i] > *highest) {
//            *highest = array[i];
//        }
//
//
//        if (array[i] < *lowest) {
//            *lowest = array[i];
//        }
//
//
//        *average += array[i];
//    }
//
//    *average /= size;
//}
//
//int main() {
//    int N;
//    float* gpaArray;
//    float highest, lowest, average;
//
//    printf("Enter the number of GPAs: ");
//    scanf("%d", &N);
//
//    gpaArray = (float*)malloc(N * sizeof(float));
//
//    if (gpaArray == NULL) {
//        printf("Memory allocation failed\n");
//        return 1;
//    }
//
//    printf("Enter the GPAs:\n");
//    for (int i = 0; i < N; i++) {
//        scanf("%f", &gpaArray[i]);
//    }
//
//    calculateGPAStats(gpaArray, N, &highest, &lowest, &average);
//
//    printf("Highest GPA: %.2f\n", highest);
//    printf("Lowest GPA: %.2f\n", lowest);
//    printf("Average GPA: %.2f\n", average);
//
//    free(gpaArray);
//
//    return 0;
//}