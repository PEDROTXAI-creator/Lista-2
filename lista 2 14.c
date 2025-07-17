#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0, total = 0;
    float soma = 0, valor;
    int continuar = 1;  
    
    printf("Digite os valores (0 para encerrar):\n");
    
    while(continuar) {
        scanf("%f", &valor);
        
        if(valor == 0) {
            continuar = 0;  
        } else {
            soma += valor;
            total++;
            
            if(valor > 0) {
                positivos++;
            } else {
                negativos++;
            }
        }
    }
    
    if(total > 0) {
        printf("\nResultados:\n");
        printf("Media aritmetica: %.2f\n", soma/total);
        printf("Valores positivos: %d\n", positivos);
        printf("Valores negativos: %d\n", negativos);
        printf("Percentual positivos: %.2f%%\n", (float)positivos/total*100);
        printf("Percentual negativos: %.2f%%\n", (float)negativos/total*100);
    } else {
        printf("Nenhum valor foi informado.\n");
    }
    
    return 0;
}