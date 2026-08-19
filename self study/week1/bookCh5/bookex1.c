#include <stdio.h>

int main(){
    int x = 1, y = 2, z[10]; 
    int *ip; //pointer to an int

    ip = &x; //ip now points to x (contains address of x)
    y = *ip; //y = value at ip = x = 1
    *ip = 0; // value at ip = value of x = 0; 
    ip = &z[0]; //ip now points to &z[0]
}


