#include <stdio.h>

int get_positive_int(char* msg){
    int x = 0;
    do{
        printf("%s", msg);
        scanf("%d", &x);
    }while(x<=0);
    return x;
}

void main(){
    get_positive_int("Kérek egy pozitív egész számot: ");
}