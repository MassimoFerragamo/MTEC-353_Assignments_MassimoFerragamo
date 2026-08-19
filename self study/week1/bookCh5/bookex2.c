#include <stdio.h>

//swap

void swap(int * pa, int * pb); 

int main(){
    int a = 4, b = 100; //declare an int
    int * pa = &a; //pointer pa points to a (contains address &a)
    int * pb = &b; //pointer pb points to b (contains address &b)

    printf("unswapped: %d  %d\n", a, b);
    swap(pa, pb); 
    printf("swapped:   %d  %d\n", a, b);
}

void swap(int * pa, int * pb){
    int vs = *pa; //swap variable = value at pa; 
    *pa = *pb; 
    *pb = vs;
}