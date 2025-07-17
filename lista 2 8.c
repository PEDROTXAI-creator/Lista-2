#include <stdio.h>

int main() {
    int num, soma = 0, count = 0;
    int continuar = 1;  
    
    printf("Calculo de media de numeros pares (digite 0 para encerrar)\n");
    
    while(continuar) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if(num == 0) {
            continuar = 0;  
        } else if(num % 2 == 0) {
            soma += num;
            count++;
        }
    }
    
    if(count > 0) {
        printf("Media dos numeros pares: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }
    
    return 0;
}