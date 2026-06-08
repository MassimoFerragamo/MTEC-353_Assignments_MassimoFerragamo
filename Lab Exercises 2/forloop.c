#include <stdio.h>

int main() {
    for (int i = 0; i < 128; i++){ // increase
        printf("%d\n", i);
    }

    for (int i = 127; i >= 0; i--){ // decrease
        printf("%d\n", i);
    }
}

