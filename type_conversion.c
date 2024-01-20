/*
---------DATATYPE HIERARCHY--------

long double     ^
double          |
float           |  
long            |
int             |
short           |
char            |

NOTE: Implicit datatype conversion around mathematical operators follow the above hierarchy.
However, datatype on the RHS of assignment operator can implicitly convert into that of LHS.

*/

#include <stdio.h>

int main(){
    
    //char a = '5'; // ASCII value is 53
    double a = 5.67;
    int b = 9;

    int result = /*(int)*/a + b; // since a is double so b is coverted into 9.00, and result is 14.67. However since result is int so 14.67 becomes 14 only.
                                // we can explicitly convert double a to int a by preixing with (int)
    printf("%d", result);

    return 0;
}