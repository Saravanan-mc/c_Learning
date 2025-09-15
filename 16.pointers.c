#include <stdio.h>

int main() {
    int a = 10;
    int **p;

    p = &a;   // store address of a in p

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer p stores = %p\n", p);
    printf("Value at pointer p = %d\n", *p);

    return 0;
}
