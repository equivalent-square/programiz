/*
ALLOCATE, REALLOCATE AND DESTROY MEMORY ADDRESSES WHILE RUNNING THE C PROGRAM.

THREE Major Functions to allocate memory:
1.  malloc()
2.  realloc()
3.  free()

NOTE: If the memory allocation fails, the MALLOC() function returns NULL.
    So it's a good idea to end the main function, if the function cannot allocate memory.
*/

#include <stdio.h>
#include <stdlib.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    // MALLOC() function

    int n = 4; // Space needed: sizeof(int) 4 bytes x 4 = 16 bytes
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));       // Saves n numer of integer values.

    if (ptr == NULL) {
        printf("Memory can't be allocated.");
        return 0;                               // TERMINATES the main() function
    }

    /*
    printf("Enter input values: \n");
    for (int i = 0; i < n; ++i){
        scanf("%d", ptr + i);
    }

    printf("Input values:\n");
    for (int i = 0; i < n; ++i){
        printf("%d\n", *(ptr + i));
    }
        
    
    */


    // REALLOC() function

    printf("Allocated memory\n");
    for (int i = 0; i < n; ++i){
        printf("%p\n", ptr + i);
    }

    n = 6;

    ptr = realloc(ptr, n * sizeof(int));

    printf("Newly allocated memory\n");
    for (int i = 0; i < n; ++i){
        printf("%p\n", ptr + i);
    }

    

    // FREE() function

    free(ptr);                          // Release the allocated memory    



    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)