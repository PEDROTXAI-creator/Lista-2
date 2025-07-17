#include <stdio.h>

int main() {
    int n, a1, r, i, termo, soma = 0;
    
    printf("Progressao Aritmetica\n");
    printf("Numero de termos (n): "); scanf("%d", &n);
    printf("Primeiro termo (a1): "); scanf("%d", &a1);
    printf("Razao (r): "); scanf("%d", &r);
    
    printf("\nTermos da PA:\n");
    for(i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }
    
    printf("\nSoma dos termos: %d\n", soma);
    
    return 0;
}