#include <stdio.h>
#ifdef QUESTION
#define ANSWER 42
#else
#define ANSWER 0
#endif

int main() {
    printf("%d", ANSWER);
}
