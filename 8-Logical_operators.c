#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0) printf("Both are positive\n");
    if (a > 0 || b > 0) printf("At least one is positive\n");
    if (!(a > b)) printf("a is NOT greater than b\n");

    return 0;
}
