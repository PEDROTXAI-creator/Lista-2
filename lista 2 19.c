#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, total = 0;
    float somaPares = 0, somaTotal = 0;
    int continuar = 1;  
    
    printf("Digite os numeros positivos (0 para encerrar):\n");
    
    while(continuar) {
        scanf("%d", &num);
        
        if(num == 0) {
            continuar = 0;  
        } else {
            total++;
            somaTotal += num;
            
            if(num % 2 == 0) {
                pares++;
                somaPares += num;
            } else {
                impares++;
            }
        }
    }
    
    // Apresentação dos resultados
    if(total > 0) {
        printf("\nResultados:\n");
        printf("Quantidade de pares: %d\n", pares);
        printf("Quantidade de impares: %d\n", impares);
        printf("Media dos pares: %.2f\n", pares > 0 ? somaPares/pares : 0);
        printf("Media geral: %.2f\n", somaTotal/total);
    } else {
        printf("Nenhum numero foi informado.\n");
    }
    
    return 0;
}