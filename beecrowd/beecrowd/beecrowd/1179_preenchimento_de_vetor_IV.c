#include <stdio.h>

int main() {
    int vetor[15], vetor_par[5], vetor_impar[5], pares = 0, impares = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            vetor_par[pares] = vetor[i];
            pares++;

            if (pares == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, vetor_par[j]);
                }
                pares = 0;
            }
        }
        else {
            vetor_impar[impares] = vetor[i];
            impares++;

            if (impares == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, vetor_impar[j]);
                }
                impares = 0;
            }
        }
    }

    for (int j = 0; j < impares; j++) {
        printf("impar[%d] = %d\n", j, vetor_impar[j]);
    }

    for (int j = 0; j < pares; j++) {
        printf("par[%d] = %d\n", j, vetor_par[j]);
    }

    return 0;
}
