#include <stdio.h>

//changing variable types

int main() {
    int number = 123; 
    double pi = 3.14; 
    float z = 40.5; 
    char c = 'A'; //be careful between a character and a string litteral
    char string[] = "Hello, World!"; 

    //warning vs error
    //warning, code still ran, but not recomended 
    //error, just does not run 

    /*
    number = 40.5f; // this will give a warning 
    */

    printf("number: %d\n", string);
    // %d is called a place holder 
    // %d is for integer
    // %s is for string 
    // %f is for float 
}

