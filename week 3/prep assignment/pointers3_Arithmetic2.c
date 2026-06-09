#include  <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int *p = arr; 

    printf("iterrating through array: \n \n");
    for (int i = 0; i < 5; i++){
        printf("address of arr[%d] is %p \n", i, (void *)(p + i));
        printf("     - value at %p is %d \n \n", (void *)(p + i), *(p + i));
    }
    printf("address of p variable is %p \n", (void *)&p);
}