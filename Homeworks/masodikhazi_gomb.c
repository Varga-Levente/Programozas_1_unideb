#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

double getDouble(char* y){
    double x;
    printf("%s", y);
    scanf("%lf", &x);
    return x;
}

double felszin(double r){
    return 4*PI*pow(r,2);
}

double terfogat(double r){
    return (4/3)*PI*pow(r,3);
}

int main(){
    double r = getDouble("Kérem a gömb sugarát: ");
    
    printf(ANSI_COLOR_GREEN "> " ANSI_COLOR_RESET "A kör felszíne %lf sugárra: %lf\n", r, felszin(r));
    printf(ANSI_COLOR_GREEN "> " ANSI_COLOR_RESET "A kör térfogata %lf sugárra: %lf\n", r, terfogat(r));

    return 0;
}