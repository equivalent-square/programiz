/*
returnType functionName(parameters){
    ...
    ...
}

NOTE: We usually define functions before main() function.
    However, we can define functions after the main() function.
    But, we have to write the function PROTOTYPE before the main() function.
*/

#include <stdio.h>
#include<math.h>

void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}


void greet(){
    printf("Good Morning\n");
}

double calculateSquare(double num){
    return num*num;
}

int addNumbers(int num1, int num2); //functionPrototype

//BEGINNING OF MAIN
int main(){
    newLine(1);
    
    //greet();
    printf("%lf", calculateSquare(2.5));
    //printf("%d", addNumbers(2,3));

    //float num = 25;
    //printf("Square rooot is %f", sqrt(num));


    newLine(2);
    return 0;
}
//END OF MAIN

int addNumbers(int num1, int num2){ // post-main function
    return num1 + num2;
}
