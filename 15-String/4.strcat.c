#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    scanf("%s %s", str1, str2);
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    return 0;
}
