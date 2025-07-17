#include <stdio.h>

int main() {
    int N, valor, fatorial;
    
    printf("Quantos valores deseja calcular? ");
    scanf("%d", &N);
    
    printf("\nValor | Fatorial\n");
    printf("------|---------\n");
    
    for(int i = 0; i < N; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valor);
        
        fatorial = 1;
        for(int j = 1; j <= valor; j++) {
            fatorial *= j;
        }
        
        printf("%5d | %d\n", valor, fatorial);
    }
    
    return 0;
}