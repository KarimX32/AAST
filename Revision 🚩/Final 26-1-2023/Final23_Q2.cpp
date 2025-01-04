//#include <stdio.h>
//#include <string.h>
//
//
//int countWords(char* str) {
//    int count = 0;
//    int flag = 0;
//
//    while (*str) {
//        if (*str == ' ' || *str == '\n' || *str == '\t') {
//            flag = 0;
//        }
//        else if (flag == 0) {
//            flag = 1;
//            count++;
//        }
//        str++;
//    }
//
//    return count;
//}
//
//// DONT USE THIS FUNCTION
////int countWords(char* str) {
////    int count = 0;
////    while (*str) {
////        if (*str == ' ' || *str == '\n' || *str == '\t') {
////            count++;
////        }
////        str++;
////    }
////    return count + 1;
////}
//
//
//void copyWords(char* L1, char* S1, char* S2) {
//    char words[100][100];
//    int inWord = 0;
//    char* start = L1;
//    int row = 0, col = 0;
//
//    while (*L1) {
//        if (*L1 == ' ' || *L1 == '\n' || *L1 == '\t') {
//            if (inWord) {
//                words[row][col] = '\0';
//                row++;
//                col = 0;
//                inWord = 0;
//            }
//        } 
//        
//        else {
//            if (!inWord) {
//                start = L1;
//                inWord = 1;
//            }
//
//
//            words[row][col++] = *L1;
//        }
//
//        L1++;
//    }
//
//
//    if (inWord) {
//        words[row][col] = '\0';
//		row++;
//    }
//
//    if (row > 0) strcpy(S1, words[0]);
//    if (row > 2) strcpy(S2, words[2]);
//}
//
//int main() {
//    char L1[101] = "\0";
//    char S1[101], S2[101];
//
//    printf("Enter a string: ");
//    gets_s(L1);
//
//    int wordCount = countWords(L1);
//    printf("Number of words in L1: %d\n", wordCount);
//
//    if (wordCount != 0) {
//        copyWords(L1, S1, S2);
//
//        printf("S1: %s\n", S1);
//        printf("S2: %s\n", S2);
//    }
//
//    return 0;
//}
