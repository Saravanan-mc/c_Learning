#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];

    fp = fopen("data.txt", "w+");  // create file and open for read/write
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "C Programming File Handling Example\n");

    rewind(fp);  // move cursor back to start

    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
