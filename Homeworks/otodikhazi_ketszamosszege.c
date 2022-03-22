#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    if(argc-1==2){
        printf("%d", atoi(argv[1])+atoi(argv[2]));
    }else{
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
    }
}