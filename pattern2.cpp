#include<stdio.h>

int main() {
    int n = 8, j, column;

    for (int i = 1; i <= 2 * n; i++) {
        if (i > n) {
            column = 2 * n - i ;

        } else {
            column = i;
        }
        int dep = n - column;

        for (int space = 0; space < dep; space++) {
            printf(" ");

        }
        for (j = 1; j <= column; j++) {
            printf("* ", i);
        }
        printf("\n");
    }

    return 0;
}
