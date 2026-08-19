#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int arr[]= {6, 3, 8, 10, -4};
    int *p1 = arr; 
    srand((unsigned int)time(NULL));
    int ra = rand() % 5; 
    int *p2 = arr + ra; 



    printf("distance: %ld\n", p2 - p1);
    printf("val1, %d, index: 0\n", *p1);
    printf("val2, %d, index: %d\n", *p2, ra);

}