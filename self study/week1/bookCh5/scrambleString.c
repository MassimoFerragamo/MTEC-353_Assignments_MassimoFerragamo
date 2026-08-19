#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void scramble_string(char *s);
int m_strlen(char *s);

int main(){
    char arr[] = "Julianna!";

    srand((unsigned int)time(NULL));
    scramble_string(arr);
    printf("%s\n", arr);

}

int m_strlen(char *s){
    int n;
    for(n = 0; *s != '\0'; s++)
        n++;
    return n;

}



void scramble_string(char *str){
    int len = m_strlen(str); 

    if (len < 2)
    return;

    for(int i = len - 1; i > 0; i--){
        int j = rand() % (i + 1);

        char temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp;
    }

}

//while used == 1
// check new random number
// check if it's used 
// if not used
// used = 0 