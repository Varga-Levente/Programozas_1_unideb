#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

char *inputString(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(*str)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';
    return realloc(str, sizeof(*str)*len); 
}

void check(char *m){
    int char8, lowerchar, upperchar, number, char_counter  = 0;

    for(int i = 0; i<strlen(m); i++){

        if(char8!=1 && strlen(m)>=8)
            char8=1;

        if(lowerchar!=1 && islower(m[i]))
            lowerchar=1;

        if(upperchar!=1 && isupper(m[i]))
            upperchar=1;

        if(number!=1 && isdigit(m[i]))
            number=1;
            
    } 

    if(char8==1 && lowerchar==1 && upperchar==1 && number==1)
        printf(GREEN"> erős jelszó\n\n");
    else
        printf(GREEN"> "RED"gyenge jelszó\n\n");

}

int main(void){
    char *m;
    int end=0;

    printf(CYAN"Adj meg jelszavakat '*' végjelig!\n\n");

    while(end==0){

        printf(RESET"jelszó: ");
        m = inputString(stdin, 10);

        if(strstr(m,"*")){
            end=1;
        }

        if(end!=1){
            check(m);
        }      
      
    }

    return 0;
}