#include <stdio.h>

#define max(a, b) ((a) > (b)) ? (a) : (b)

int main() {
    
    int a = 1, b = 2;
    printf("\nmax(a, b): %d\n", max(a, b));
    printf("a = %d, b = %d\n", a, b);

    printf("\nmax(++a, ++b): %d\n", max(++a, ++b));  // (1)
    printf("a = %d, b = %d\n\n", a, b);              // (2)
    
}
