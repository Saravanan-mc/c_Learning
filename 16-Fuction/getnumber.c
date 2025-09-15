// File: getnumber.c
#include <stdio.h>

int getNumber() {   // no input, returns value
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int num = getNumber();
    printf("You entered %d\n", num);
    return 0;
}
