#include <stdio.h>
#include <stdlib.h>

#define tSize 5

void pozitivitas(int n[tSize]){
    for(int i=0; i<tSize; i++){
        //Abs eldöntése és módosítása   
        if(n[i]<0){
            n[i]=abs(n[i]);
        }

        //Kiiratás
        if(i<tSize-1){
            printf("%d, ", n[i]);
        }else{
            printf("%d\n", n[i]);
        }
    }
}

int main(){

    int array[tSize]={4, -7, -34, 23, 67};
    pozitivitas(array);

    return 0;

}