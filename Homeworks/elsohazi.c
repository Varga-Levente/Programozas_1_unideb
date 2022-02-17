#include <stdio.h>
#include <stdlib.h>

//Első feladat function
void t1(){
    int sum=0;
    for(int i=1; i<=100; i++){
        sum+=i;
    }
    printf("Első feladat\n");
    printf("\tAz egész számok összege 1-100-ig: %d\n\n",sum);
}

//Masodik feladat function
void t2(){
    int sum=0;
    for(int i=1; i<1000; i++){
        if(i%3 == 0 || i%5 == 0){
            sum+=i;
            //printf("%d\n",i);
        }
    }
    printf("Második feladat\n");
    printf("\t1000-nél kisebb 3 és 5-el osztható számok összege: %d\n\n", sum);
}

//Harmadik feladat function
void t3(){
    printf("Harmadik feladat\n");
    int beker, sum=0;
    do{
        printf("\tEgesz szam (vege: 0): ");
        scanf("%d",&beker);
        sum+=beker;
    }while(beker!=0);
    printf("\tA Elemek osszege: %d\n\n", sum);
}

//Negyedik feladat function
void t4(){
    printf("Negyedik feladat\n");
    int beker, counter=0;
    do{
        printf("\tEgesz szam (vege: 0): ");
        scanf("%d",&beker);
        if(beker>0){
            counter++;
        }
    }while(beker!=0);
    printf("\tPozitiv elemek szama: %d\n\n", counter);
}

//Ötödik feladat function
void t5(){
    printf("Ötödik feladat\n");
    int beker, negative=0, positive=0;
    do{
        printf("\tEgesz szam (vege: 0): ");
        scanf("%d",&beker);
        if(beker>0){
            positive++;
        }else if(beker<0){
            negative++;
        }
    }while(beker!=0);
    printf("\tPozitiv elemek szama: %d\n", positive);
    printf("\tNegatív elemek szama: %d\n\n", negative);
}

//Hatodik feladat function
void t6(){
    printf("Hatodik feladat\n");
    int num1, num2;
    char c;
    printf("\tKérem az első számot: ");
    scanf("%d", &num1);
    printf("\tKérem az második számot: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("\t>\n\n");
    }else if(num1<num2){
        printf("\t<\n\n");
    }else{
        printf("\t=\n\n");
    }
}

//Hetedik feladat function
void t7(){
    int n;
    printf("Hetedik feladat\n");
    printf("\tKérek egy számot: ");
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
        if(i%4 == 0){
            printf("\t%d\n", i);
        }
    }
    printf("\n");
}

//Nyolcadik feladat function
void t8(){
    int n;
    printf("Nyolcadik feladat\n");
    printf("\tKérek egy számot: ");
    scanf("%d", &n);
    while(n>=1){
        if(n%2 != 0){
            printf("\t%d\n", n);
        }
        n--;
    }
    printf("\n");
}

int main(){
    //Első feladat
    t1();

    //Második feladat
    t2();
    
    //Harmadik feladat
    t3();

    //Negyedik feladat
    t4();

    //Ötödik feladat
    t5();

    //Hatodik feladat
    t6();

    //Hetedik feladat
    t7();

    //Nyolcadik feladat
    t8();

    return 0;
}