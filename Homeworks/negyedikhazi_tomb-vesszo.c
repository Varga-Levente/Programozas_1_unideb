#include <stdio.h>

#define tSize 5

void myarray(int n[]){

    for(int i = 0; i<tSize; i++){
        if(i<tSize-1){
            printf("%d, ", n[i]);
        }else{
            printf("%d\n", n[i]);
        }
    }

}

int main(){

    int array[tSize]={4, 7, 34, 23, 67};
    myarray(array);
    return 0;

}