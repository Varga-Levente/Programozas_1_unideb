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

int charcounter(char *m, int* length){

    int _length=0;

    for(int i=0; i<strlen(m); i++){
        if(m[i]!=' '){
            _length++;
        }
    }

    *length=_length;

}

int main(){

    char* m;
    int length=0;
    printf(RESET"Szám: ");
    m = inputString(stdin, 10);
    charcounter(m, &length);
    printf(GREEN"> "CYAN"A számjegyek összege: "RED"%d\n", length);

return 0;

}