#include <stdio.h>

//Globális karakter tömb
char abc[27];

//Tömb feltöltés ASCII segítségével
void feltolt(){
    int counter=0;
    for(int i=97; i<=122; i++){
        abc[counter]=(char)i;
        counter++;
    }

    //Null terminator hosszáfűzés ("Stringé alakítás")
    abc[26]='\0';
}

int main(){

    feltolt();
    printf("%s\n", abc);

return 0;

}