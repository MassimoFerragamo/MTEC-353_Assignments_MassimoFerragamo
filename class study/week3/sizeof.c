#include <stdio.h>

int main() {
    int num[4] = {1, 2, 3, 4};
    int a; 
    
    int byteSize = sizeof(num); 
    int arraySize = sizeof(num)/sizeof(int);
    int arraySize_unknown_datatype = sizeof(num)/sizeof(num[0]);

    printf("%d\n", arraySize);
}