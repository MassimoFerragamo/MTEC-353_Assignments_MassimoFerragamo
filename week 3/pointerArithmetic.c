#include <stdio.h>


int main(){
    int num[4] = {1, 2, 3, 4};
    int *pnum = &num[0]; 

    pnum += 1;

    printf("address %p, value %d\n", pnum, *pnum);
}