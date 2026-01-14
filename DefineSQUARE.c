#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    printf("%d\n", SQUARE(5));     
    printf("%d\n", SQUARE(1 + 2));   
    printf("%d\n", SQUARE(3 - 1));   
    return 0;
}
