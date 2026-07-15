#include <stdio.h> //standard input output headers, library that allows io functions like print

int main() { //simple script that prints hello world;
    printf("Hello, World! \n"); // print hello world and escape character

    // we also saw how to calculate the area of a rectangle and declaring variables 
    // but let's do the area of a triangle
    float area = 12.3 * 8.6; // we declare a float variable here
    area = area/2; //we change the variable
    printf("the are of our rectangle is %.2f square metes \n", area); // we print it with format as a float with 2 decimal places
}

//how do we run this? 

//choose compiler clang in this case 
//C compiles and executes separately
/*
compile: 

clang recap.c

this will make a file a.out; 

to compile and choose the name of the program 

clang recap.c -o Hello_World


now to print run ./[name of outFile] (./ is the command line shortcut for our directory): 
    ./Hello_Word = "Hello, World!" 


you can also concatenate commands with "&&" so that the code is compiled and runs with one command 

clang recap.c -o Hello_World && ./Hello_World
    Hello, World!
*/

