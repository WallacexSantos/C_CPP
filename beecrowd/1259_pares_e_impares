#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int decrescente(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int N;
    scanf("%d", &N);

    int pares[100000], impares[100000];
    int p = 0, i = 0;

    for (int j = 0; j < N; j++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
            pares[p++] = num;
        else
            impares[i++] = num;
    }

    qsort(pares, p, sizeof(int), crescente);
    qsort(impares, i, sizeof(int), decrescente);

    for (int j = 0; j < p; j++)
        printf("%d\n", pares[j]);

    for (int j = 0; j < i; j++)
        printf("%d\n", impares[j]);

    return 0;
}
