#include <stdio.h>
#include <stdbool.h>

#define tSize 5
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void kereses (int t[tSize]){

    int legnagyobb = t[0];
    int legkissebb = t[0];

    for(int i = 0; i<tSize-1; i++){
        if(t[i]>legnagyobb)
            legnagyobb=t[i];

        if(t[i]<legkissebb)
            legkissebb=t[i];
    }

    printf(GREEN"> "CYAN"A tömb legnagyobb eleme: "RED"%d\n", legnagyobb);
    printf(GREEN"> "CYAN"A tömb legkissebb eleme: "RED"%d\n", legkissebb);
}

int main(){
    int nArr[tSize]={10,1,4,8,4};

    kereses(nArr);
    
}