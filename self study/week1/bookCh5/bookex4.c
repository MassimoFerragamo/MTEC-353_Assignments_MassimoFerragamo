#include <stdio.h>

int my_strlen(char *s); 

int main(){
    char arr[] = {3, 5, 4, 5, 67, 3, 22};
    printf("%d \n", my_strlen(arr));
};

int my_strlen(char *s){
    int n; 

    for(n = 0; *s != '\0'; s++)
        n++;
    return n;
}