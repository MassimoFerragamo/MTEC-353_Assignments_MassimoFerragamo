#include <stdio.h>

int main(){
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; 
    int * pa; 
    pa = a;

    printf("%d\n", pa[1]);
}