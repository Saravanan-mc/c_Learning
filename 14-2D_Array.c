#include <stdio.h>
int main() {
    int i, j, rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    // Input
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Output
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
