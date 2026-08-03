#include <stdio.h>

int main() {
    int a = 2; 
    int b = 5; 
    float c = 2/5; //this will return an integer, because there are no floats in the division 

    //these will work
    c = (float) 2/5; 
    c = 2.0f/5; 
    c = 2.0/5; 

    printf("number: %.1f\n", c);

    //operator precedence PEMDAS
    // parenthesis, exponent, multiplication, division, addition, substraction; 
    // look at the slide for different operators 
}