// File: sum_withreturn.c
#include <stdio.h>

int add(int a, int b) {   // input, output
    return a + b;
}

int main() {
    int x, y, result;
    scanf("%d %d", &x, &y);
    result = add(x, y);
    printf("Sum = %d\n", result);
    return 0;
}
