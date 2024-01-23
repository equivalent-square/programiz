/*
READ AND WRITE (, append) CONTENTS OF A FILE

Step 1: Open a file ( FILE* fptr ), FOPEN function ---- modes: read(r), write(w), append(a).
Step 2: Perform file operation
Step 3: Close the file

NOTE: If you open a file in write mode,
    the pre-existing content of the file is erased.
    Whereas, append mode does not erase it.
*/

#include <stdio.h>

// MAIN_CODE(STARTS)
void newLine(int count);
int main(){
    newLine(1);

    // Use FILE* fptr pointer to open a file.

    FILE* fptr;
    char content[1000];

    //fptr = fopen("test.txt", "r");
    fptr = fopen("newFile.txt", "w");
    //fptr = fopen("newFile.txt", "a");
    
    /*
    if (fptr != NULL) {
        printf("File opened Successfully");
    }
    else{
        printf("File opened Unsuccessfully");
    }
    */


    // READ FILE CONTENT

    /*
    if (fptr != NULL) {
        // fgets(content, 1000, fptr); //FGETS only gets the first line. Use loop to read all lines.
        while (fgets(content, 1000, fptr)){     //Returns true as long as there is content to be read in the file.
            printf("%s", content);
        }
        //printf("%s", content);
    }
    else{
        printf("File opened Unsuccessfully");
    }
    */



    // WRITE CONTENTS TO FILE.

    //fputs("I LOVE C PROGRAMMING\n", fptr);
    //fputs("In this video, we will learn to work with files in C programming. More specifically, we will learn to perform file operations like read content from the file, write content to file.", fptr);




    // CLOSE THE FILE (recommended).

    fclose(fptr);
  

    newLine(2); // If there is loop, put decrease the argument down to 1.
    return 0;
}
void newLine(int count){
    for (int i = 1; i <= count; i++){printf("\n");}}
//MAIN_CODE(ENDS)