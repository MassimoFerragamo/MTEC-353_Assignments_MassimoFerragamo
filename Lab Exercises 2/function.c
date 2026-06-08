#include <stdio.h> 

//declare global variables

int d = 50;

//there is also something weird, you can make functions prototypes, so you can define a function after the program 


//function protype for scalability and later on probably for init files?
int sum(int, int); // you don't even need to write the names
// write the function first and then use the function prototype


// you can only return one value in C
int main(){
   int c =  sum(10, 20); //calling the function 
   printf("%d\n", c);
}

//declare a function; 
int sum(int a, int b){
        return (a + b + d);
}