#include <stdio.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void printRandoms(int also, int felso, int db){
    int i;
    printf(GREEN"\n> "CYAN"A generált számok: ");
    for (i = 0; i < db; i++) {
        int num = (rand() % (felso - also + 1)) + also;
        printf(RED"%d ", num);
    }
    printf("\n\n");
}

int main(){

    int db, alsohatar, felsohatar;
    printf("Hány db random számot kérsz? ");
    scanf("%d",&db);

    printf("Alsó határ: ");
    scanf("%d",&alsohatar);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d",&felsohatar);

    printRandoms(alsohatar, felsohatar, db);

return 0;

}