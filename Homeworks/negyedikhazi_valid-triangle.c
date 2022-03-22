#include <stdio.h>
#include <stdbool.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void valid_triangle(int a, int b, int c){
    if(a+b>c || a+c>b || b+c>a){
        printf(GREEN"true\n");
    }else{
        printf(RED"false\n");
    }
}

int main(){

    valid_triangle(3,5,1);

return 0;

}