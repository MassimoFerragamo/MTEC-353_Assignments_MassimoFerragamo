#include <stdio.h>
#include <ctype.h>

enum Type{
    TYPE_FLOAT, 
    TYPE_INT, 
};

void * test(void * numPtr, enum Type type){
    switch (type){
        case TYPE_FLOAT: 
            printf("%.2f is float  \n", *(float *)numPtr);
            break;
        case TYPE_INT: 
            printf("%d is int \n", *(int *)numPtr);
            break;
        default: 
            printf("not a recognized type"); 
            return 0;
            break;
    }
    return(numPtr);
}

int main(){
    int x = 10; 
    float f = 10.9;
    printf("out: %p \n", test(&x, TYPE_INT));
    printf("out: %p \n", test(&f, TYPE_FLOAT));

}