/*
(array + i) gives the address of the i'th element with %p.
*(array + i) gives the value of the i'th element with %d. 

ages + i == &ages[i]
*(ages + i) == ages[i]
*/

#include <stdio.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);


    int num[5] = {1, 3, 5, 7, 9};
    for (int i = 0; i < 5; ++i){
        printf("%d = %p \n", num[i], &num[i]);
    }

    printf("Array address: %p \n", num);

    for (int i = 0; i < 5; ++i){
        printf("Array address of %d: %p \n", num[i], num + i); //
    }

    // ASSIGNING

    *num = 11;
    *(num + 4) = 99;
    for (int i = 0; i < 5; ++i){
        printf("%d\n", num[i]);
    }    




    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)