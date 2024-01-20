/*
for (initializationExpression; testExpression; updateExpression){
    // code inside the for loop
}*/


#include <stdio.h>

int main(){
    
    int sum = 0;

    for (int i = 1; i <= 100; i+=2) { sum += i; } // Sum of all odd nos upto 100.
        
    printf("%d", sum);
    

    return 0;
}