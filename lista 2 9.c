#include <stdio.h>

int main() {
    int i, num, maior, menor;
    
    printf("Digite 50 valores:\n");

    printf("Valor 1: ");
    scanf("%d", &num);
    maior = menor = num;

    i = 1;
    while(i < 50) {
        printf("Valor %d: ", i+1);
        scanf("%d", &num);
        
        if(num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
        i++;
    }
    
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}