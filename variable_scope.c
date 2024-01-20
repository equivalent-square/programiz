/*

*/

#include <stdio.h>

void addNumbers(int num1, int num2){
    int sum = num1 + num2;
    printf("%d", sum);
}

void newLine(int count);
int main(){
    newLine(1);

    addNumbers(5, 6);

    newLine(2);
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}