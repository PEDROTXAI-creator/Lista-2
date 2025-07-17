#include <stdio.h>

int main() {
    int num, produto = 1;
    int continuar = 1;  
    
    printf("Digite numeros inteiros positivos (0 para encerrar):\n");
    
    while(continuar) {
        scanf("%d", &num);
        
        if(num == 0) {
            continuar = 0;  
        } else if(num > 0 && num % 2 == 0) {
            produto *= num;  
        }
    }
    
    printf("Produtorio dos pares: %d\n", produto);
    return 0;
}