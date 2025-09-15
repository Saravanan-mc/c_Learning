#include <stdio.h>
#include <string.h>
int main() {
    char s1[50], s2[50];
    scanf("%s %s", s1, s2);

    if (strcmp(s1, s2) == 0) 
        printf("Strings are Equal\n");
    else 
        printf("Strings are Not Equal\n");

    return 0;
}
