/* TO CALL THE FUNCTION FROM INSIDE ITS OWN SELF

void resurce(){
    ...
    if ( condition ) {
        ...
    }
    else {
        recurse();
    }
    ...
}

int main(){
    ...
    recurse();
    ...
    return 0;
}

*/

#include <stdio.h>

int sum(int n);

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    int num = 100;

    printf("%d", sum(num)); // sum_{0}^{n=100}

    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)

int sum(int n){
    if (n != 0){
        return n + sum(n-1);
    }
    else{
        return n;
    }
}