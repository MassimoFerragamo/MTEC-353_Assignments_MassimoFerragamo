#include <stdio.h>


int main(){
    int a = 12; 
    int b = 10; 
    int res = a | b; 
    int bits = getbits(a);
    printf("%d\n", bits);
}