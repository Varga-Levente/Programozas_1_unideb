#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void generaterandoms(int lotto[], int also, int felso, int db){

    for (int i = 0; i < db; i++) {
        int num = (rand() % (felso - also + 1)) + also;
        for (int j = 0; j < db; j++) {
            if(lotto[j]==num){
                i--;
                //puts("EXISTS");
                break;
            }else{
                lotto[i]=num;
                //puts("NOT EXISTS");
                break;
            }
            break;
        }
    }

}

void separate(int n[], int size){

    for(int i = 0; i<size; i++){
        if(i<size-1){
            printf("%d, ", n[i]);
        }else{
            printf("%d\n", n[i]);
        }
    }

}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){

    int db, alsohatar, felsohatar;
    printf("Hány db random számot kérsz? ");
    scanf("%d",&db);

    int lotto[db];

    printf("Alsó határ: ");
    scanf("%d",&alsohatar);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d",&felsohatar);

    srand(time(0));

    generaterandoms(lotto, alsohatar, felsohatar, db);
    qsort(lotto, 5, sizeof(int), cmpfunc);
    printf(GREEN"\n> "CYAN"A generált számok: "RED);
    separate(lotto, db);

return 0;

}