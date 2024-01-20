/*
RERNARY OPERATOR USES BOOLEAN VALUES

REPLACES IF-ELSE STATEMENT TO MAKE CODE LOOK CLEANER.

test_condition ? expression1 : expression2;

explain: If test_condition is true, expression1 is executed.
        If false, expression2 is executed.

NOTE: If you plan to use values later in the program, you should store value in a ternary-operator variable.

*/

#include <stdio.h>

int main(){
    
    /*
    int age = 15;

    (age >= 18) ? printf("You can vote.") : printf("You can't vote.");
    */

    char operator = '+';
    
    int num1 = 8;
    int num2 = 7;
    
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2); // 
    printf("%d", result);

    /*
    int result = (operator == 'p') ?
    (num1 + num2) : 
    (num1 - num2);

    printf("%d", result);
    */


    return 0;
}