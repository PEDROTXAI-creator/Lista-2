#include <stdio.h>

int main() {
    int inicio = 92;
    int fim = 1478;
    int produto = 1;
    int i, num, e_primo;
    int ultimo_valor_valido = 1;

    for(num = inicio; num <= fim; num++) {
        e_primo = num > 1;

        for(i = 2; e_primo && i*i <= num; i++) {
            if(num % i == 0) e_primo = 0;
        }

        if(e_primo) {
            if(produto > 0 && num > 2147483647 / produto) {
                printf("Produto parcial (até %d): %d\n", ultimo_valor_valido, produto);
                return 0;
            }
            produto *= num;
            ultimo_valor_valido = num;
        }
    }

    printf("Produto dos primos: %d\n", produto);
    return 0;
}