#include <stdio.h>
#define LISTSIZE 100

int binSearch(int x, int v[], int n); 


int main(){
    int list[LISTSIZE]; 

    for(int i = 0; i < LISTSIZE; i++){
        list[i] = i; 
    }

    binSearch(108, list, LISTSIZE);
    
};

int binSearch(int x, int v[], int n){
    int low, high, mid; 

    low = 0; 
    high = n - 1; 

    while(low <= high){
        mid = (low + high)/2;
        printf("mid = %d\n", mid);
        if (x < v[mid]){
            high = mid - 1; 
            printf("high = %d\n", high);
        }
        else if (x > v[mid]){
            low = mid + 1; 
            printf("low = %d\n", low);
        }
        else   
            return mid;
    }
    printf("not found \n");
    return -1;

};
