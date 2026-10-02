#include <stdio.h>

int main() {
    int T, N[1000], contador = 0; 
    
    scanf("%d", &T);

    for(int i = 0; i < 1000; i++) {
        N[i] = contador;
        printf("N[%d] = %d\n", i, N[i]);
        contador++;  
        if(contador == T) {
            contador = 0; 
        }
    }
    
    return 0;
}
