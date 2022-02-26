#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//gcc -o sphere masodikhazi_kor.c -lm

void ker(int r){
    double kerulet = 2 * r * PI;
    printf(ANSI_COLOR_GREEN "> " ANSI_COLOR_RESET "A(z) %d sugarú kör kerülete: %.2lf\n", r, kerulet);
}

void ter(int r){
    double terulet = pow(r, 2) * PI;
    printf(ANSI_COLOR_GREEN "> " ANSI_COLOR_RESET "A(z) %d sugarú kör területe: %.2lf\n", r, terulet);
}

int main(){
    int r;
    printf("Kérem a kör sugarát: ");
    scanf("%d", &r);

    ker(r);
    ter(r);

    return 0;
}