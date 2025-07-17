#include <stdio.h>

int main() {
    int inicio = 13;
    int fim = 73;
    int soma = 0;
    int quantidade = 0;

    for(int i = inicio; i <= fim; i++) {
        soma += i;
        quantidade++;
    }

    float media = (float)soma / quantidade;
    printf("A media aritmetica dos numeros entre %d e %d eh: %.2f\n", inicio, fim, media);
    
    return 0;
}