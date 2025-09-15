#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    a += b;
    printf("After += : %d\n", a);

    a -= b;
    printf("After -= : %d\n", a);

    a *= b;
    printf("After *= : %d\n", a);

    a /= b;
    printf("After /= : %d\n", a);

    a %= b;
    printf("After %%= : %d\n", a);

    return 0;
}
