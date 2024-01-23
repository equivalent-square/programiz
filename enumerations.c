/*
AN ENUM IS A TYPE WHICH HAS FIXED SET OF VALUES

enum Size {
    Small,          // (by default) represented as 0 (integral constants)
    Medium,         //              represented as 1
    Large,          //              represented as 2
    ExtraLarge      //              represented as 3
} shoeSize; // we can also create variables during the definition of the enum

NOTE:-

INTEGRAL CONSTANTS: All ENUM CONSTANTS are (ny default) internally represented
                     as FIXED INTEGER VALUES, known as INTEGRAL CONSTANTS.
*/

#include <stdio.h>
enum Size {
    Small = 30,          // (by default) represented as 0 (integral constants)
    Medium = 32,         //              represented as 1
    Large = 34,          //              represented as 2
    ExtraLarge = 36      //              represented as 3
}shoeSize;

    
    // MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    //enum Size shoeSize;
    shoeSize = Large;

    printf("%d", shoeSize);

    


    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)