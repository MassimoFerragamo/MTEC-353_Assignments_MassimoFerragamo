#include <stdio.h>

// so many ways of caturing inputs 

//  scanf is the opposite of printf, it allows to capture from the keyboard
// need to look into this on my own time maybe not we are lloking at it right now 
// you need scanf

int main() {
    int x;
    float f; 

    printf("Type in an integer value: ");
    scanf("%d", &x); //&is a the reference that fetches the value
    
    printf("You typed in: %d\n", x);
}