#include <stdio.h>

int main () {

    int p, n, r;
    float si;

    p = 1000;
    n = 12;
    r = 7;

    si = p * r * n/100;

    printf("Simple interest is %.1f", si);
    return 0;
}