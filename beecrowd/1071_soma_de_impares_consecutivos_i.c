#include <stdio.h>

int main() {
    int X, Y, temp, soma = 0;
    
    scanf("%d %d", &X, &Y);
    
    if (X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }
    X++; 
        
    while (X < Y) {
        if (X % 2 != 0) {
            soma = soma + X;
        }
        X++; 
    }
    
    printf("%d\n", soma);
    return 0;
}
