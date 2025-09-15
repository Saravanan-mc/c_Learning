#include <stdio.h>
int main() {
    char str[50];

    // Input (single word)
    scanf("%s", str);  
    printf("String: %s\n", str);

    // Input (with spaces)
    getchar(); // clear buffer
    printf("Enter line: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);

    return 0;
}
