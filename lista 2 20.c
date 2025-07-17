#include <stdio.h>

int main() {
    int num, somaNegativos = 0;
    int continuar = 1;  
    
    printf("Digite os numeros inteiros (0 para encerrar):\n");
    
    while(continuar) {
        scanf("%d", &num);
        
        if(num == 0) {
            continuar = 0;  
        } else if(num < 0) {
            somaNegativos += num;  
        }
    }
    
    printf("\nSomatorio dos numeros negativos: %d\n", somaNegativos);
    
    return 0;
}