/*

*/

#include <stdio.h>
#include <string.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    //char lang[] = "C Programming";
    //printf("Length: %zu", strlen(lang)); // %zu is used to specify the output datatype of strlen() function.

    //char food[] = "Pizza";
    //char bestFood[strlen(food)];
    //strcpy(bestFood, food); //Copies contents of one string to another.
    //printf("%s", bestFood);

    /*char text1[] = "Hey, ";
    char text2[] = "how are you?";
    printf("%s\n", text2);
    strcat(text1,text2); // Concatenation (but what happens to the 0th character of the 2nd string?)
    printf("%s\n%s\n", text1,text2);
    printf("%c", text2[0]);*/

    char text3[] = "abcd";
    char text4[] = "abcd";
    int result = strcmp(text3, text4); //Compares the two strings and return 0 if match, otherwise non-zero.
    printf("%d", result);



    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)