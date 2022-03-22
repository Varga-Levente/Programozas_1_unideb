#include <stdio.h>

void line(char c, int length){
    int counter = 0;
    printf("\n");
    do{
        printf("%c", c);
        counter++;
    }while(counter < length);
    printf("\n");
}

int main(){

printf("Hello");
line('-',40);
printf("World");

return 0;

}