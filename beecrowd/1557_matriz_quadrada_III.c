#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n != 0) {
        int maior = 1;
        int tamanho = 1;

        for (int i = 0; i < 2 * n - 2; i++)
            maior = maior * 2;

        while (maior >= 10) {
            maior = maior / 10;
            tamanho++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int valor = 1;

                for (int k = 0; k < i + j; k++)
                    valor = valor * 2;

                printf("%*d", tamanho, valor);

                if (j < n - 1)
                    printf(" ");
            }

            printf("\n");
        }

        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}
