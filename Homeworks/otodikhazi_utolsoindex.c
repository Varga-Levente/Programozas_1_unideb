#include <stdio.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"


int rfind_char(char *str, char x)
{
    int index = -1;
    for (int i = 0; i <  strlen(str); i++)
        if (str[i] == x)
            index = i;
    printf(GREEN "> " CYAN"A(z) '"RED"%s"CYAN"'\t szövegben a keresett '"RED"%c"CYAN"' karakter a "RED"%d. "CYAN"indexen volt megtalálható utoljára.\n", str, x, index);
}

int main(){

rfind_char("Abba", 'b');
rfind_char("Abba", 'a');
rfind_char("Abba", 'x');
rfind_char("Aladar", 'a');

return 0;

}