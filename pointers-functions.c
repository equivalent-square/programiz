/*

*/

#include <stdio.h>

int squareNumber(int num){ // INPUTS VALUE
    return num * num;
}

void findSquare(int* num){ // INPUTS POINTER
    *num = *num * *num;
}

int* findSquarePointer(int* num){ // RETURNS POINTER
    *num = *num * *num;
    return num;
}

int* findSumPointer(int* num1, int* num2, int* sum){
    *sum = *num1 + *num2;
    return sum;
}

void findValue(int* num){ // argument is a pointer which points to an address.
    *num = 39;
}

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    //int num = 25;

    //printf("Square of %d is %d.", num, squareNumber(num));

    //findValue(&num); // calling the address as argument/

    //printf("\nNumber: %d", num);

    //findSquare(&num);

    //printf("\nSquare is %d.", num);

    //printf("\nSquare is %d.", *findSquarePointer(&num));

    int num1 = 32;
    int num2 = 18;
    int sum;
    printf("\nSum is %d.", *findSumPointer(&num1, &num2, &sum));




    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)