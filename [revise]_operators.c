// ARITHMETIC OPERATORS

/*
+       Addition
-       Subtraction
*       Multiplication
/       Division
%       Remainder
++      Increment (by 1)
--      Decrement (by 1)*/

#include <stdio.h>

int main(){
    
    // ADDITION   
    /*
    double x = 12.06;
    double result = x+8;
    printf("%lf", result);
    printf("\n%lf", x+8);
    */

    // DIVISION - integer
    /*
    int x = 12;
    int result = x/8;
    printf("%d", result);
    */

    // DIVISION - double
    /*
    double x = 12.00;
    double result = x/8.00;
    printf("%.2lf", result);
    */

    // REMAINDER (error if used with float)
    /*
    int x = 12;
    int result = x%8;
    printf("%d", result);
    */

    // (prefix) INCREMENT DECREMENT 
    /* The variable is decremented first, and then
    its updated value is used in the expression.*/
    /*
    int x = 0;
    printf("%d", ++x);
    */

    // (postfix) INCREMENT DECREMENT
    /*The current value of the variable is used
    in the expression first, then decremented.*/ 
    /*
    int x = 0;
    printf("%d", x++);    
    */

    int x = 4 / 2 + 6 * 5 - 1; // BDMAS-precedence rule
    printf("%d", x);

    return 0;
}