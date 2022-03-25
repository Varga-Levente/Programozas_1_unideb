#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    return sqrt(pow(abs(p1.x-p2.x),2)+pow(abs(p1.y-p2.y),2));
}

int main()
{
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf(GREEN"> "CYAN"A két pont közti távolság: "RED"%lf\n", distance(a, b));

    return 0;
}