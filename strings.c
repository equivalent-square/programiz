/*
char str[] = "Programiz";
*/

#include <stdio.h>


// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    char str[10] = "Program\0iz";
    str[2] = 'O';
    printf("%s", str);

    for (int i = 0; i < 7; i++){ printf("\n%c", str[i]); }

    char name[20];
    //printf("Enter your name: ");
    //scanf("%s", name);  // only takes values upto whitespace
    //fgets(name, sizeof(name), stdin);
    //printf("%s", name);


    
    

    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)