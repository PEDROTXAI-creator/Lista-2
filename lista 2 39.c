#include <stdio.h>

int ehPerfeito(int num) {
    int soma = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) soma += i;
    }
    return soma == num;
}

int main() {
    int encontrados = 0, num = 2;
    
    printf("5 primeiros numeros perfeitos:\n");
    while(encontrados < 5) {
        if(ehPerfeito(num)) {
            printf("%d ", num);
            encontrados++;
        }
        num++;
    }
    printf("\n");
    
    return 0;
}