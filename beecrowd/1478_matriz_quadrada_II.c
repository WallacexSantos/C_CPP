#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int valor;

                if (i > j) {
                    valor = i - j;
                } else {
                    valor = j - i;
                }

                printf("%3d", valor + 1);

                if (j < n - 1)
                    printf(" ");
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
