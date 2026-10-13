#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int m[101][101];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == n / 2 && j == n / 2) {
                    m[i][j] = 4;
                } else if (i >= n / 3 && i < n - n / 3 && j >= n / 3 && j < n - n / 3) {
                    m[i][j] = 1;
                } else if (i == j) {
                    m[i][j] = 2;
                } else if (i + j == n - 1) {
                    m[i][j] = 3;
                } else {
                    m[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
