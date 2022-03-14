#include <stdio.h>
#include <string.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int match_ends(int n, char *words[]){
    int counter = 0;    
    for (int i = 0; i < n; ++i)
    {
        if(strlen(words[i])>=2 && words[i][0] == words[i][strlen(words[i])-1]){
            counter++;
        }
    }
    printf(GREEN "> " CYAN "A kettő karakternél hosszabb és egyező első és utolsó karakterű szavak száma: " RED"%d\n", counter);
};

int main()
{
    char *szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    char *szavak2[] = {"", "x", "xy", "xyx", "xx"};
    char *szavak3[] = {"aaa", "be", "abc", "hello"};
    int szavak_meret = 5;

    match_ends(szavak_meret, szavak1);

    return 0;
}