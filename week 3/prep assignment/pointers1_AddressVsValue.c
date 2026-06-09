#include  <stdio.h>

// I am trying to understand say we have a variable x = 10;

// & --> address of (variable)
// (no symbol) --> value of variable
// * --> value at address


// Dereferencing = accessing the value at the address stored in a pointer.

int main() {
    int x = 1000; //value of x
    int *p = &x; //*p = value at address (&) of variable x

    printf("value: %d \n", *p); //this way I am printing out the value at the address 
    printf("address: %p \n", p); //this is the address at which that variable is stored
    printf("address of p: %p \n", &p); 
}

// x is a variable that stores a value. (1000) 
// p is a variable that stores the memory address of x. (0x16b86ea98)
// *p is the value stored at the address contained in p. (10)
// &p is the address of the variable p itself. (0x16d66aab0)