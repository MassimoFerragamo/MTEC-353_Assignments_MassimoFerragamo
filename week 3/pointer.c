#include <stdio.h>

int main() {
    float pi  = 3.14; 
    int num = 4; 
    int *p; // null pointer, not pointing to anything
    //program will crash if you try to dereference it because it does not referecing anything 

    // pointer type variable
    // a pointer is a variable that holds the memory address of another variable
    int *pnum = &num; // this is not an integer it's holding the memory address of an integer type variable 
    // & is the reference operator, if you use & it will reference the memory address of this int 

    float *ppi = &pi; //this is the address of a float; 
    // & this is the reference operator

    printf("num = %d, pi = %f\n", num, pi );

    // on a pointer * this is the dereference operator 
    printf("num = %d, pi = %f\n", *pnum, *ppi);

    // *ppi = pi
    // ppi = address of pi
    // ppi = &pi 
    // *ppi = *&pi which kind of cancels it out and turns it into pi
    // derefercing does to the location of & and then fetches the value
}