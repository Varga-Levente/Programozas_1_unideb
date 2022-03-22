#include <stdio.h>
#include <stdbool.h>

#define tSize 5
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void rendezette (int t[tSize]){

    int i=0;
    bool rendezett = true;
 
    for(i=0; i<tSize-1 ; i++) {
        if(t[i]>t[i+1]){
            rendezett = false;
        }
    }
    if(rendezett==true){
        printf(GREEN"> "CYAN"A tömb rendezett\n");
    }else{
        printf(GREEN"> "CYAN"A tömb rendezetlen\n");
    }
    

}

int main(){
    int nArr[tSize]={0,1,4,3,4};

    rendezette(nArr);
    
}