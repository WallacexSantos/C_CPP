#include <stdio.h>

int main() {
    int X, N, in = 0, out = 0, I = 0;

    scanf("%d", &X);

    while (I < X) {
        scanf("%d", &N);

        if (N >= 10 && N <= 20) {
            in++;
        } else {
            out++;
        }
        I++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
