#include <stdio.h>


int josephus(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++) {
        r = (r + k) % i;
    }
    return r;
}

int main() {
    int nc;
    if (scanf("%d", &nc) != 1) return 0;

    for (int i = 1; i <= nc; i++) {
        int n, k;
        if (scanf("%d %d", &n, &k) == 2) {
           
            int survivor = josephus(n, k) + 1;
            printf("Case %d: %d\n", i, survivor);
        }
    }

    return 0;
}
