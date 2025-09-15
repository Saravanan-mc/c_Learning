#include <stdio.h>
#include <string.h>
int main() {
    char src[50], dest[50];
    scanf("%s", src);
    strcpy(dest, src);
    printf("Copied String: %s\n", dest);
    return 0;
}
