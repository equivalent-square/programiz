#include <stdio.h>

int main(){
    
    /*
    int age;

    printf("Enter value: ");
    scanf("%d", &age);

    printf("\nAge: %d\n\n", age);*/
        
    double num;
    char alpha;

    /*printf("Enter float input: ");
    scanf("%lf", &num);
    
    printf("Enter character input: ");
    scanf("\n%c", &alpha);*/

    printf("Enter double and a character (w space in bw): ");
    scanf("%lf %c", &num, &alpha); 
    printf("Double: %lf\nAlphabet: %c", num, alpha);

    return 0;
}