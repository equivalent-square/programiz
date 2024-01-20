/* LEVERAGED FOR DECISION-MAKING PURPOSES

switch( variable or expression){      //COMPARES WITH THE INPUT VARIABLE
    case value1:        //Only integers and characters as values.
    body of case1
    break;              //If break is ommitted from the true case, then the program will also execute (not just test) all the SUBSEQUENT cases.

    case value1:
    body of case1
    break;
    
    case valueN:
    body of caseN
    break;
    
    default:            // not necessary when input values are within the domain
    body of default
}

*/

#include <stdio.h>

int main(){
    
    /*
    int num;
    printf("Enter no bw 1 and 7: ");
    scanf("%d", &num);
    */

    /*
    switch (num){
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;

        case 7:
        printf("Saturday");
        break;

        default:    
        printf("Invalid Number");
    }
    */

/*
    switch(num){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        
        printf("Weekday");
        break;

        case 1:
        case 7:

        printf("Weekend");
        break;

        default:    
        printf("Invalid Number");
    }
*/

    char oper;
    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &oper);

    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (oper){
        case '+':
        printf("%lf", num1 + num2);
        break;

        case '-':
        printf("Difference: %lf", num1 - num2);
        break;

        case '*':
        printf("Product: %lf", num1 * num2);
        break;

        case '/':
        (num2 != 0) ? 
        printf("Division: %lf", num1 / num2) :
        printf("Division by 0 is undefined");
        break;

        default:
        printf("Wrong Operator");
    }


    return 0;
}