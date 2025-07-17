#include <stdio.h>

int main() {
    int m;
    int continuar = 1;  
    
    printf("Digite os valores (0 para encerrar):\n");
    
    while(continuar) {
        scanf("%d", &m);
        
        if(m == 0) {
            continuar = 0;  
        } else {
            if(m % 2 == 0) {
                int divisores = 0;
                for(int i = 1; i <= m; i++) {
                    if(m % i == 0) divisores++;
                }
                printf("Divisores de %d: %d\n", m, divisores);
            } else {
                if(m < 10) {
                    int fat = 1;
                    for(int i = 2; i <= m; i++) {
                        fat *= i;
                    }
                    printf("Fatorial de %d: %d\n", m, fat);
                } else {
                    int soma = 0;
                    for(int i = 1; i <= m; i++) {
                        soma += i;
                    }
                    printf("Soma 1 ate %d: %d\n", m, soma);
                }
            }
        }
    }
    
    return 0;
}