#include <stdio.h>

int main(){
    char str[] = "Julianna is Pretty";
    char *ptr; 
    
    
    for (ptr = str; *ptr != '\0'; ptr++){
        printf("%c", *ptr);
    };
    printf("\n");
}