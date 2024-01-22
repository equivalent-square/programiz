/*
int* = ptr
use &

NOTE:    ptr == &age
        *ptr ==  age
*/

#include <stdio.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    int age =  25;
    //printf("%p", &age); // Pointer specifier is %p .
                // prints MEMORY ADDRESS

    
    
    // POINTER VARIABLES (stores the memory address)

    int* ptr = &age; // * Assigns the address (&) of age.

    //printf("Address: %p", ptr);
    //printf("\nValue: %d", *ptr); //* Prints value of the variable pointed by the pointer.

    *ptr = 31; // Ultimately, changed the value of the variable by pointers.
    printf("\nValue: %d", age);


    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)