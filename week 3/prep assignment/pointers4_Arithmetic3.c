#include <stdio.h>

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int *p1 = &arr[3];
    int *p2 = &arr[8];

    printf("%p - %p = \n%ld/sizeof(int = 4) = \n%ld \n", (void *)p2, (void *)p1, (p2 - p1) * 4, p2 - p1);

    // This works because C defines arrays as contiguous sequences of elements,
    // and pointer arithmetic is defined in terms of element size, not raw bytes.
    // This lets you work with arrays naturally without manually handling byte offsets,
    // unless you explicitly need low-level memory control.
}