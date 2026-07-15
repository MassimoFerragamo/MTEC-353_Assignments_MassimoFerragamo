#include  <stdio.h>

//let's iterrate through an array using pointers in memory



int main() {

    /* 
    p is a variable containing the address = 0x16d66aaa0 
    *p is the value at p = 10
    &p = address of the p variable itself
    */

    int arr[] = {10, 20, 30, 40, 50}; 
    int *p = arr; // p points to the first element of the array

    printf("value1: %d \n", *p);  //the value at *p (0x16d66aaa0) is  10
    printf("address1: %p \n", (void *)p); //address of *p is (0x16d66aaa0)

    printf("value1: %d \n", *(p + 1)); //the value at *p (0x16d66aaa4) is  20
    printf("address1: %p \n ", (void *)(p + 1)); //address of *(p + 1) is (0x16d66aaa0) + sizof(int) (int = 4) so (0x16d66aaa0)+ 4 = (0x16d66aaa4)

    printf("value1: %d \n", *(p + 2)); //the value at *p (0x16d66aaa8) is  30
    printf("address1: %p \n", (void *)(p + 2)); //address of *(p + 2) is (0x16d66aaa0) + (sizof(int) * 2) (int = 4 * 2) so (0x16d66aaa0)+ 8 = (0x16d66aaa8)

    printf("value1: %d \n", *(p + 3)); //the value at *p (0x16d66aaac) is  40
    printf("address1: %p \n", (void *)(p + 3)); //address of *(p + 3) is (0x16d66aaa0) + (sizof(int) * 3) (int = 4 * 3) so (0x16d66aaa0)+ 12 (in hexacdecimal "c") = (0x16d66aaac)

    printf("value1: %d \n", *(p + 4)); //the value at *p (0x16d66aab0) is  50
    printf("address1: %p \n", (void *)(p + 4)); //address of *(p + 3) is (0x16d66aaa0) + (sizof(int) * 4) (int = 4 * 4) so (0x16d66aaa0)+ 16 (in hexacdecimal "10") = (0x16d66aab0)
}