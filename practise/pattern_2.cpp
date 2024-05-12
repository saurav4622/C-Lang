#include <stdio.h>

int main() {
    int i, j;

    // Loop to print top half of the arrow
    for (i = 1; i <= 5; i++) {
        for (j = 5; j >= i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Loop to print bottom half of the arrow
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

