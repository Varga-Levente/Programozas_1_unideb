#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(void){
    char *m;
    int end=0;
    int longest=0;
    int word_counter=0;

    while(end==0){
        printf("Szó: ");
        m = inputString(stdin, 10);
        word_counter++;
        if(strstr(m,"*")){
            end=1;
        }
        if(strlen(m)>longest){
            longest=strlen(m);
        }
    }

    printf(GREEN"> "RED"%d"CYAN" db szót adtál meg. A leghosszabb szó "RED"%d"CYAN" karakterből áll.\n",word_counter-1, longest);

    return 0;
}