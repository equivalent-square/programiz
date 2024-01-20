#include <stdio.h>
#include <stdbool.h>

/*
--------------COMPARISON OPERATORS------------
>       Greater than
<       Less than
==      Equal to
>=      Greater than or equal to
<=      Less than or equal to
!=      Not equal to
----------------------------------------------

-----------LOGICAL OPERATORS IN C PROG--------
&&      AND
||      OR
!       NOT
----------------------------------------------

NOTE: In C prog boolean is represented by integer values.
    'false' is represented by 0, and 'true' by all the values except 0.
*/

int main(){
    
    bool value1 = true; // C is a case-sensitive language,
    bool value2 = false; // we can neither use True nor False

    printf("%d", value1); // in C prog boolean is represented by integer (0, 1) value.
                // False is represented by 0, True by all the values except 0.
    printf("\t%d", value2);

    //COMPARISON OPERATORS
    bool value3 = (12>9);
    printf("\n%d", value3);

    bool value4 = (12<9);
    printf("\n%d", value4);

    bool value5 = 9 != 9; // DOUBT: are the round brackets around boolean expressions necessary?
    printf("\n%d", value5);

    //LOGICLAL OPERATORS
    int age = 18;
    double height = 6.3;

    bool result1 = (age >= 18) && (height > 6.0);
    printf("\nAND: %d", result1);

    bool result2 = (age >= 18) || (height > 6.5);
    printf("\nOR: %d", result2);

    bool result3 = !(age >= 18);
    printf("\nNOT: %d", result3);

    return 0;
}