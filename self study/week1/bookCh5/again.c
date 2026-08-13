#include <stdio.h>

int main(){
    int x = 10; 
    int * addr; // addr is a pointer to an int

    addr = &x; //addr points to x (contains the address of x)
    // *addr = value stored at address contained in addr
    *addr = 100; //change what is at the address *addr

    printf("%d\n", x); //same value
    printf("%d\n", *addr); //same value
}