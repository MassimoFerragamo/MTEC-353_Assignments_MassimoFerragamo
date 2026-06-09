#include <stdio.h>


//swap functions

void swap(int a, int b);
void pswap(int *a, int *b);

int main(){
    int v1  = 10; 
    int v2 = 20; 
    // a = v1, b = v2
    // a and b have separate memory space than v1 and v2
    // swap(v1, v2); // this won't work 
    // the issue is scoping
    // because you are now changing a and be, 
    // but you never collect them or call them again in this function
    // so you operate on the memory address and change the value on the memory address 
    
    pswap(&v1, &v2); // this works
    // you are not operating on v1 and v2 because you are assigning v1 to a 

    printf("%d %d\n", v1, v2);
}

void pswap(int *a, int *b){
    int c = *a; //a represents now the value at address &v1 so c is value of *a 
    *a = *b; //the value of a (at &v1) = value of b (at &v2)
    *b = c; // the value of b (at &v2) = value of C
}

void swap(int a, int b){
    int c = a; // this won't work because a and b are separate variables 
    a = b; 
    b = c; 
}