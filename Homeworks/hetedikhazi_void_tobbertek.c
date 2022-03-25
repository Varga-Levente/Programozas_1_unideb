#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ASIZE 10
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int randnumgen(int also, int felso){

    int num = (rand() % (felso - also + 1)) + also;
    return num;

}

void feltolt(int arr[ASIZE], int also, int felso){

    for (int i = 0; i < ASIZE; i++) {
        arr[i]=randnumgen(also, felso);
    }

}

void adatok(int arr[ASIZE], int* lowest, int* highest, double* avg){

    int _lowest=arr[0];
    int _highest=arr[0];
    int sum=0;

    for (int i = 0; i < ASIZE; i++) {
        if(arr[i]<_lowest)
            _lowest=arr[i];

        if(arr[i]>_highest)
            _highest=arr[i];

        sum+=arr[i];
    }

    *lowest=_lowest;
    *highest=_highest;
    *avg=(double)sum/(double)ASIZE;

}

void format(int n[]){

    for(int i = 0; i<ASIZE; i++){
        if(i<ASIZE-1){
            printf(RED"%d, ", n[i]);
        }else{
            printf(RED"%d\n", n[i]);
        }
    }

}

int main(){

    int legkisebb, legnagyobb;
    double atlag;
    int randarr[ASIZE]={13, 57, 23, 71, 11, 68, 88, 59, 10, 32};;
    
    srand(time(0));

    //feltolt(randarr, 10, 99); 
    adatok(randarr, &legkisebb, &legnagyobb, &atlag);

    printf(GREEN"> "CYAN"A tömb elemei: ");
    format(randarr);

    printf(GREEN"> "CYAN"Legkisebb elem: "RED"%d\n", legkisebb);
    printf(GREEN"> "CYAN"Legnagyobb elem: "RED"%d\n", legnagyobb);
    printf(GREEN"> "CYAN"Az elemek átlaga: "RED"%.1f\n", atlag);

return 0;

}