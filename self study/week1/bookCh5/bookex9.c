#include <stdio.h> 

//functions that return pointers and function pointers 

int *givePointer(int i);
int multiply(int a, int b); 
int add(int a, int b);
int substract(int a, int b);

int main(int argc,char *argv[]){
    int (*funcp)(int, int);


    while(--argc > 0 && (*++argv)[0] == '-'){
        switch((*argv)[1]){
            case 'm': 
                funcp = &multiply;   
                break;
            case 'a': 
                funcp = &add;
                break;
            case 's': 
                funcp = &substract;
                break;
            default:
                printf("op not found\n"); 
                return 0;
                break;  
        }
    };


    printf("%d \n", funcp(5, 5)); 

}

int multiply(int a, int b){
    return a * b;
}

int add(int a, int b){
    return a + b;
};

int substract(int a, int b){
    return a - b;
};

int *givePointer(int adder){
    static int number = 64; 
    number += adder;
    return &number;
};