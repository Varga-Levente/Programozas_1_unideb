#include <stdio.h>
#include <math.h>

#define SZAM 100

int negyzetosszeg(int n){

    int sum=0;

    for(int i=1; i<=SZAM; i++){
        sum+=(int)pow(i,2);
    }

    return sum;

}

int osszegnegyzet(int n){

    int sum=0;

    for(int i=1; i<=SZAM; i++){
        sum+=i;
    }

    return (int)pow(sum,2);

}

int main(){

    printf("%d - %d = %d\n", osszegnegyzet(SZAM), negyzetosszeg(SZAM), osszegnegyzet(SZAM)-negyzetosszeg(SZAM));

return 0;

}