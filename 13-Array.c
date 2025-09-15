#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // size of array
    int arr[n];

    // Input
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
