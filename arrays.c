/*
datatype arrayName[arraySize] = {};

NOTE: We cannot change the datatype of an array once it is fixed.
*/

#include <stdio.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    int a[5];

    // ASSIGNMENT

    int ag[5] = {21, 29, 25, 32, 17};

    int age[] = {21, 29, 25, 32, 17}; // automatically assumes the size of the array as the number of elements

    int age1[5] = {1, 29, 25}; // in this case the 4th and 5th element is automatically an randomly assumed;
    

    // ARRAY INDEX - first element has index 0

    //printf("%d", ag[0]);

    
    // ASSIGN VALUES USING INDEX

    a[0] = 23;
    //printf("%d", a[0]);


    // CHANGE VALUES USING INDEX

    a[0] = 32;
    //printf("\n%d", a[0]);


    // LOOP AND ARRAY

    for ( int i = 0; i < 4; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    
    for ( int i = 0; i < 6; i++){
        printf("%d\n", a[i]);
    }


    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)k