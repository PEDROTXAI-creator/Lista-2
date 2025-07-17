#include <stdio.h>

int main() {
    float valor;
    int contador = 0;
    int continuar = 1;
    
    printf("Digite valores (0 para sair):\n");
    
    while(continuar) {
        if(contador % 20 == 0) {
            printf("\n Valor | Quadrado | Cubo    | Raiz\n");
            printf("-------|----------|---------|--------\n");
        }
        
        scanf("%f", &valor);
        
        if(valor == 0) {
            continuar = 0; 
        } else {
            float quadrado = valor * valor;
            float cubo = valor * valor * valor;
            float raiz = valor;

            for(int i = 0; i < 10; i++) {
                raiz = (raiz + valor/raiz) / 2;
            }
            
            printf("%6.2f | %8.2f | %7.2f | %6.2f\n", 
                  valor, quadrado, cubo, raiz);
            
            contador++;
        }
    }
    
    return 0;
}