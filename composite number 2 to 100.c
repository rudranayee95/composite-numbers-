#include <stdio.h>

int main() {
    int i, j;
    printf("Composite numbers between 2 and 100 are:\n");
    for (i = 2; i <= 100; i++) {
        int is_composite = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_composite = 1;
                break;
            }
        }
        if (is_composite == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
