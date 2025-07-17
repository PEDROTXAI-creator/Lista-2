#include <stdio.h>

int main() {
    int valor, soma = 0, quantidade = 0;
    int continuar = 1;  
    
    printf("Calculo de media (digite negativo para encerrar)\n");
    
    while(continuar) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        if(valor < 0) {
            continuar = 0;  
        } else {
            soma += valor;
            quantidade++;
        }
    }
    
    if(quantidade > 0) {
        printf("Media dos valores: %.2f\n", (float)soma / quantidade);
    } else {
        printf("Nenhum valor valido foi inserido.\n");
    }
    
    return 0;
}