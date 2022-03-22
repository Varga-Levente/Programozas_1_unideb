#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main (int argc, char const *argv[]) {
    
    int n;
    
    printf("Kérek egy számot: ");
    scanf("%d", &n);
    
    if(n<0 || n%2==0){
        printf(ANSI_COLOR_RED "\b[HIBA] - " ANSI_COLOR_RESET "Nem megfelelő a beírt szám!\n");
        printf(ANSI_COLOR_CYAN "\b[INFO] - " ANSI_COLOR_RESET "A beírt szám legyen pozitív és páratlan!\n");
        exit(0);
    }
    
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
    
        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=n/2+1; i>0; i--){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        for(int j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}