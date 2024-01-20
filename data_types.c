//Types of Data
/*
char    (1 byte)    %c for printing
int     (4 bytes)   %d for printing
float(with f after the number)   (4 bytes)   %0.nf for printing
double  (8 bytes)   %0.nlf for printing

**** SIZEOF() OPERATOR ****

sizeof(var)     printf("\n\nint size: %zu", sizeof(age));
*/

#include <stdio.h>

int main(){

    //double num = 5.5e6;
    //printf("%lf", num);

    char ch = 'z';
    printf("%c", ch);
    printf("\n%d", ch); //characters are internally stored as integers

    // sizeof() Operator

    int age;
    double num;

    printf("\n\nint size: %zu", sizeof(age));
    printf("\ndouble size: %zu", sizeof(num));

    return 0;
}