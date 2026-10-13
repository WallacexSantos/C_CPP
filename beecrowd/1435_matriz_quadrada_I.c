#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int valor;

                if (i < j)
                    valor = i;
                else
                    valor = j;

                if (n - 1 - i < valor)
                    valor = n - 1 - i;

                if (n - 1 - j < valor)
                    valor = n - 1 - j;

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
