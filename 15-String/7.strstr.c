#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[50];
    scanf("%s %s", str, sub);

    if (strstr(str, sub))
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}
