#include <stdio.h>

void mario(int n) {
    int counter = n-1;
    for(int i = 1; i <= n; i++){
        for(int m = 0; m < counter; m++){
            printf(" ");
        }
        for(int a = 0; a < i; a++){
            printf("%c", '#');
        }
        printf("\t\t");
        for(int j=0; j < i; j++){
            printf("#");
        }
        counter--;
        printf("\n");
    }
}


int main(){

    int m;
    
    printf("Kérek egy magasságot: ");
    scanf("%d", &m);

    mario(m);

    return 0;

}