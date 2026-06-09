#include <stdio.h>

int main() {
    char str[4] = {'a', 'b', 'c', '\0'};
    int arr[4] = {1, 2, 3, 4};
    
    for (int i = 0; i < 4; i++){
        int *ps = &arr[i]; 
        printf("addres %p, value %d\n", ps, *ps ); // value is ASCII value 
    }
}