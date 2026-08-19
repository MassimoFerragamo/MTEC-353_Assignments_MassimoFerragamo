#include <stdio.h>

int m_strlen(char *s);

int main(){
    char str[] = "Hello, World!!"; 

    printf("%d \n", m_strlen(str));

}

int m_strlen(char *s){
    char *p = s; 

    while(*p != '\0')
    p++; //advance per character 
    //p = s + number of characters
    // so p - s = number of characters
    return p - s;
}

