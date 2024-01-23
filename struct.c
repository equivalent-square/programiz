/*A STRUCT is a COLLECTION of VARIABLES of various datatypes

struct Person{
    double salary;
    int age;
}; // We can specify struct variables right here beside } AS WELL as perso1, person2;

*/

#include <stdio.h>
//DEFINE STRUCT

/*
struct Person{
    double salary;
    int age;
};
*/

/*
struct Person{          //without TYPEDEF, without ALIAS, with variables
    double salary;
    int age;
}person1, person2;
*/



// TYPEDEF in struct


/*
typedef struct Person{   //with TYPEDEF, ,with ALIAS, without variables
    double salary;
    int age;
}person;
*/

typedef struct Complex{
    double re;
    double im;
} complex;


// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    //struct Person person1;
    //struct Person person2;
    //struct Person person1 = {.age = 5, .salary = 21};
    //struct Person person2 = {.age = 10, .salary = 42};

    /*
    person person1, person2;

    person1.age = 25;
    person1.salary = 4321.78;
    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %lf", person1.salary);

    person2.age = 2;
    person2.salary = 78;
    printf("\nAge of person2: %d\n", person2.age);
    printf("Salary of person2: %lf", person2.salary);
    */

    
    // SUM OF COMPEX NUMBERS


    complex c1 = {.re = 3, .im = 4};
    complex c2 = {.re = 4, .im = 5};

    complex sum;

    sum.re = c1.re + c2.re;
    sum.im = c1.im + c2.im;

    printf("%.2lf + i %.2lf", sum.re, sum.im);



    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)