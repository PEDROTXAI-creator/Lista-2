#include <stdio.h>

int main() {
    int X, Y, potencia = 1;
    
    printf("Digite X e Y (positivos): ");
    scanf("%d %d", &X, &Y);
    
    for(int i = 0; i < Y; i++) {
        potencia *= X;
    }
    
    printf("%d^%d = %d\n", X, Y, potencia);
    return 0;
}