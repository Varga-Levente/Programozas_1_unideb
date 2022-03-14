#include <stdio.h>

void fizz_buzz(int number){
    char *ans;
    if(number%3==0 && number%5==0){
        printf("fizzbuzz\n");
    }else if(number%3==0){
        printf("fizz\n");
    }else if(number%5==0){
        printf("buzz\n");
    }else{
        printf("%d\n",number);
    }
}

int main(){

    for(int i = 1; i<=100; i++){
        fizz_buzz(i);
    }

return 0;

}