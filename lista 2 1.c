#include <stdio.h>

int main() {
    int i, valor, contador_negativos = 0;
    
    printf("Digite 5 valores inteiros:\n");
    
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valor);
        
        if (valor < 0) {
            contador_negativos++;
        }
    }
    
    printf("\nTotal de valores negativos: %d\n", contador_negativos);
    
    return 0;
}