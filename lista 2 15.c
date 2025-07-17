#include <stdio.h>

int main() {
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    float num;
    int continuar = 1;  
    
    printf("Digite os numeros (negativo para encerrar):\n");
    
    while(continuar) {
        scanf("%f", &num);
        
        if(num < 0) {
            continuar = 0; 
        } else {
            if(num <= 25) intervalo1++;
            else if(num <= 50) intervalo2++;
            else if(num <= 75) intervalo3++;
            else if(num <= 100) intervalo4++;
        }
    }
    
    printf("\nQuantidade por intervalo:\n");
    printf("[0-25]: %d\n", intervalo1);
    printf("[26-50]: %d\n", intervalo2);
    printf("[51-75]: %d\n", intervalo3);
    printf("[76-100]: %d\n", intervalo4);
    
    return 0;
}