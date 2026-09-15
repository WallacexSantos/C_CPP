#include <stdio.h>

int main() {
    float valores[6];
    int valores_positivos = 0;
    float media = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &valores[i]);

        if (valores[i] > 0) {
            valores_positivos++;
            media += valores[i];
        }
    }

    media = media / valores_positivos;

    printf("%d valores positivos\n", valores_positivos);
    printf("%.1f\n", media);

    return 0;
}
