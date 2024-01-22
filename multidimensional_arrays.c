/*
an array of arrays
*/

#include <stdio.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}}; // a x b matrix
    int brr[3][4] = {{-2, 1, 4, 7}, {-1, 2, 5, 8}, {0, 3, 6, 9}}; // b x c matrix
    //printf("%d", arr[1][2]);

    int crr[2][4]; // a x c matrix
    for (int i = 0; i < 2; ++i){ // a times
        for (int j = 0; j < 4; ++j){ // c times
            int sumProduct = 0;
            for (int k = 0; k < 3; ++k){ // b times
                sumProduct += arr[i][k]*brr[k][j];
            }
            crr[i][j] = sumProduct;
        }
    }

    // PRINT

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            printf("%d\t", arr[i][j]);
        }
        newLine(1);
    }
    newLine(1);

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; ++j){
            printf("%d\t", brr[i][j]);
        }
        newLine(1);
    }
    newLine(1);

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 4; ++j){
            printf("%d\t", crr[i][j]);
        }
        printf("\n");
    }

    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)