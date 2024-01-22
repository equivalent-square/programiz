/*

*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    //int num = 27;

    //int a = 5;
    //int b = 2;

    char alpha = 'E';

    //printf("Square root is %lf", sqrt(num));
    //printf("Cube root is %lf", cbrt(num));
    //printf("Power is %lf", pow(a, b));
    //printf("Uppercase is %c", toupper(alpha));
    printf("Lowercase is %c", tolower(alpha));

    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)