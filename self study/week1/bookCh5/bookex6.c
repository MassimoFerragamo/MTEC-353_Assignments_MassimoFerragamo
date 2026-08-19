#include <stdio.h>

void strcopy(char *s, char *t);
int m_strcmp(char *s, char *t);

int main (){
    char one[] = "message a";
    char two[] = "message 8";

    printf("%d\n", m_strcmp(two, one));
    strcopy(one, two);
    printf("%s\n", two);


}

void strcopy(char *s, char *t){

    while((*t++ = *s++)); 
    /*
    this works because you are assigning *s to *t then incrementing until *s = (char)'\0' which = int 0
    */
}

int m_strcmp(char *s, char *t){
    for(; *s == *t; s++, t++)
        if (*s == 0)
        return 0; 
    return *s - *t;
}