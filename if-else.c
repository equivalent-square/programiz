/*---FORMAT---
-------------------------
if (test_condition1){
    statement1
}

else if (test_condition2){
    statement2
}

else{
    statement3
}

NOTE: If there is only one if condition, then we can remove curly brackets {}.

if (age >= 18) printf("You are eligible to vote.");

*/

#include <stdio.h>

int main(){
    
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

   // if (age >= 18) printf("You are eligible to vote.");

    if (age > 120 || age < 0){
        printf("Invalid Age");
    }

    /*
    if (age > 120){
        printf("Invalid Age");
    }

    else if (age <0){
        printf("Invalid age");
    }
    */

    else if (age >= 18){
        printf("You are eligible to vote.");
    }
    /*
    if (age < 18){
        printf("Sorry, you are not eligible to vote");
    }
    */
    else{
        printf("Sorry, you are not eligible to vote");
    }

    return 0;
}

