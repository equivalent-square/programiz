/*
#include is the preprocessor directive that includes the stdio header file.

#define Preprocessor is used to define macros.
#define PI 3.1415
PI is a macro. A macro is a piece of code which is given a name.
In our example, PI indicates the value 3.1415 .

DEFINE FUNCTION MACROS

*/

#include <stdio.h>
#include <math.h>                       // PRECPROCESSOR DIRECTIVE
#define PI 3.1415                       // DEFINE VARIABLE MACRO
#define circleArea(r) (PI * r * r)      // DEFINE FUNCTION MACRO

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);


    /*
    double num = 36;

    double squareRoot = sqrt(num);
    printf("%0.2lf", squareRoot);

    printf("\n%lf", PI);
    */

    double radius = 3;
    double area;

    //area = PI * radius * radius;      //using variable macro
    area = circleArea(radius);          //using function macro

    //printf("Area: %.2lf", area);
    printf("Area of circle with radius %.2lf is %.2lf.", radius, area);

    
    


    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)