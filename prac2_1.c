#include <stdio.h>
int main() {
    unsigned int x = 9;
    char y = 32;
    unsigned int z = 3;
    x = x - y;
    z = z * x;
    z = z - y;
    printf("%d\n", z); // should print -101
}

