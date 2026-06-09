#include <stdio.h>

// you need to indicate the data type before the pointer
// you can caste pointer variables 

int main(){
    float pi = 3.14; 
    int num = 4; 
    int *p; // null pointer

    p = (int *) &pi; 

    printf("p = %d\n", *p);
    // this does not always work but it should be possible in theory
    
}