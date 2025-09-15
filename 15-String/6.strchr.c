#include <stdio.h>
#include <string.h>
int main() {
    char str[50], *ptr;
    char ch;
    scanf("%s %c", str, &ch);

    ptr = strchr(str, ch);
    if (ptr != NULL) 
        printf("Found at position: %ld\n", ptr - str + 1);
    else 
        printf("Not Found\n");

    return 0;
}
