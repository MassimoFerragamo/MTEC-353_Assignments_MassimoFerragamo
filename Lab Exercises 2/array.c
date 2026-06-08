#include <stdio.h>

//arrays seem to be quite weird 

int arr[3] = {1, 2, 3}; // you don't need to specify the size here, but most of the time you do

int main() {
    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);

    printf("-- method 2 \n");

    for(int i = 0; i < 10; i++){
        printf("%d, ", arr[i]);
    };
    printf("\n");
}

// arrays in c are not aware of the array ending 
// a for loop won't stop 
// you also can't return an array 

// we will see what pointers are tomorrow 
