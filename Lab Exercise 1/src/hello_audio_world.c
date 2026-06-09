#include <stdio.h>
#include <math.h>

int main() {
    double amplitude;

    for (int i = 0; i < 40; i++){
        amplitude = sin(i * 2);
        printf("%.2f", amplitude);
    }
}