/*
BREAK is used to terminate a function/loop/statement.
CONTINUE is used to only skip the iteration.
*/
#include <stdio.h>

int main(){
    

/*
    for (int i = 1; i <= 5; i++){

        if (i == 3) break;
        //if (i ==3 ) continue;
        printf("%d\n", i);
        
    }
*/


/*
    while("anything other than 0 is boolean true"){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) break;

        printf("%d\n", num);
    }
*/        
   


    // Using break and continue together.

    while("anything other than 0 is boolean true"){

        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) break; 

        if (num % 2 == 1) continue;

        printf("%d\n", num);
    }


    return 0;
}