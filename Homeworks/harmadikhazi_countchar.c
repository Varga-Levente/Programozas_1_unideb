#include <stdio.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int char_count(char *s, char c){
    int counter = 0;
    for(int i = 0; i<strlen(s); i++){
        if(s[i]==c){
            counter++;
        }
    }
    printf(GREEN "> " CYAN"A(z) " RED"'%s'" CYAN" szövegben a " RED"'%c'" CYAN" betű összesen " RED"%d" CYAN" alkallomal fordul elő.\n", s, c, counter);
}

int main(){

    char_count("Abba", 'b');

return 0;

}