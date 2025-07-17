#include <stdio.h>

int main() {
    int num, maior = 0, menor = 0, qtd = 0;
    float soma = 0;
    
    printf("Digite 500 valores positivos:\n");
    for(int i = 0; i < 500; i++) {
        scanf("%d", &num);
        
        if(i == 0) {
            maior = menor = num;
        } else {
            if(num > maior) maior = num;
            if(num < menor) menor = num;
        }
        
        soma += num;
        qtd++;
    }
    
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", soma/qtd);
    
    return 0;
}