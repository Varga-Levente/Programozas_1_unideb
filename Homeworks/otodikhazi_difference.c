#include <stdio.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void printdiff(int n[], int last){

    printf(GREEN"> "CYAN"Ezek (növekvő sorrendben): ");

    for(int i = 0; i<99; i++){
        if(n[i]!=0){
        if(i<last){
            printf(RED"%d, ", i);
        }else{
            printf(RED"%d\n", i);
        }
        }
    }

}

int main(){

    int array[99];
    for(int i=0; i<=99; i++){
        array[i]=0;
    }

    int input_number;

    printf(GREEN"> "CYAN"Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");

    while(input_number!=0){
        printf(RESET"Szám: ");
        scanf("%d",&input_number);
        if(input_number!=0){
            if(input_number>99 || input_number<1){
                printf(GREEN"> "RED"Ez a szám kívül esik az elfogadható intervallumon!\n");
            }else{
                array[input_number]++;
            }
        }
    }

    int counter=0;
    int last_index=0;
    for(int i=0; i<=99; i++){
        if(array[i]!=0){
            counter++;
            last_index=i;
        }
    }
    printf(GREEN"> "RED"%d "CYAN"db különböző szám lett megadva.\n", counter);
    printdiff(array, last_index);
}
