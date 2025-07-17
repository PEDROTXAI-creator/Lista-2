#include <stdio.h>

int main() {
    char nome[50];
    float compras, bonus;
    
    printf("Cadastro de 150 clientes:\n");
    for(int i = 0; i < 150; i++) {
        printf("\nCliente %d:\n", i+1);
        printf("Nome: "); scanf("%s", nome);
        printf("Valor das compras: "); scanf("%f", &compras);
        
        if(compras < 500000) {
            bonus = compras * 0.10;
        } else {
            bonus = compras * 0.15;
        }
        
        printf("Bônus: %.2f\n", bonus);
    }
    
    return 0;
}