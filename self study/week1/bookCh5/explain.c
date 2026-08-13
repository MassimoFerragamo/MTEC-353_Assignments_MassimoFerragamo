#include <stdio.h>

void change(int *number){
    *number *= 14;
}

int main(){
    int JuBirthday = 1214;
    
    change(&JuBirthday);
    printf("%d birthday\n", JuBirthday);

}

