// File: sum_noreturn.c
#include <stdio.h>

void printSum(int a, int b) {   // input, no output
    printf("Sum = %d\n", a + b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printSum(x, y);
    return 0;
}
