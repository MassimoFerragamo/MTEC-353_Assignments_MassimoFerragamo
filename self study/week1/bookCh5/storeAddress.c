#include <stdio.h>

//pointers are variables containing the address of a variable. 

// & the adress of whatever
int main(){
    int x= 1; //this is a variable
    int *addr; //a pointer is a type of variable whose value is an address 
    addr = &x; //store the address
    // I want to change what is at the address

    printf("%p\n", addr); //this is the address of a variable

    //I want to store this somewhere i need a pointer

}