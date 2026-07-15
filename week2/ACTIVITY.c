#include <stdio.h>

int main() {
    double z = 3.14159265359; 
    short s = 100; 
    long l = 1000000;     
   
    printf("size of l = %lu\n", sizeof(l));
    printf("size of s = %lu\n", sizeof(s));
    printf("size of z = %lu\n", sizeof(z));
}

