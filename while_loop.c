/*
----------WHILE LOOP-----------

while (condition){
    // statements inside while
}

-------------------------------

---------DO-WHILE LOOP---------

do {
    // body of loop
} while (condition);

-------------------------------
NOTE: do-while loop executes the body of loop at least once
*/


#include <stdio.h>

int main(){
    
    int num;
    printf("Enter the no: ");
    scanf("%d", &num);

    int count = 1;
//    int count = 0;
    //int count = 0;

    // -------WHILE LOOP---------

//    while ( /*count*/ ++count /*count++*/ <= 10 /*<=9*/ ){
//        int prod = num * count;
//        printf("%d X %d = %d\n", num, count, prod);
        //++count;
//    }
    


    // ------DO-WHILE LOOP--------

    do {
        int prod = num * count;
        printf("%d X %d = %d\n", num, count, prod);
    } while (count++ < 10);



    return 0;
}