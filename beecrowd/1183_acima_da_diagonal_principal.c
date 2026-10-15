#include <stdio.h>

int main() {
    char x;
    double matriz[12][12];
    double soma = 0;
    int quantidade = 0;

    scanf(" %c", &x);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);

            if (j > i) {
                soma += matriz[i][j];
                quantidade++;
            }
        }
    }

    if (x == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / quantidade);

    return 0;
}
