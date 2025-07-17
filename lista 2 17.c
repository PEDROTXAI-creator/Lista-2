#include <stdio.h>

int main() {
    int m, n, soma;
    int continuar = 1;  
    
    printf("Digite os pares m,n (0,0 para encerrar):\n");
    
    while(continuar) {
        scanf("%d %d", &m, &n);
        
        if(m == 0 && n == 0) {
            continuar = 0; 
        } else {
            soma = 0;
            for(int i = m; i < m + n; i++) {
                soma += i;
            }
            
            printf("Soma dos %d numeros a partir de %d: %d\n", n, m, soma);
        }
    }
    
    return 0;
}