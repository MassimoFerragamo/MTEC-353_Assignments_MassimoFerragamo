#include <stdio.h>

//scope wide datatype renaming

typedef unsigned char byte;
//three parts 

//keyword typedef 
//unsigned char is the character we are renaming 
// the new and arbitrary nam byte 

int main(){
    byte ascii = 'a'; 
    //byte = unsigned char;

    printf("%c\n", ascii);
}