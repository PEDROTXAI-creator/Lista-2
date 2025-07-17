#include <stdio.h>

int main() {
    int codigo;
    float preco_custo, preco_novo;
    float soma_antigo = 0, soma_novo = 0;
    int qtd_produtos = 0;
    int continuar = 1;
    
    printf("Cadastro de produtos (codigo negativo para encerrar):\n");
    
    while(continuar == 1) {
        printf("\nCodigo do produto: ");
        scanf("%d", &codigo);
        
        if(codigo < 0) {
            printf("Finalizando o cadastro...\n");
            continuar = 0;
        } else {
            printf("Preco de custo: ");
            scanf("%f", &preco_custo);

            preco_novo = preco_custo * 1.20;

            soma_antigo += preco_custo;
            soma_novo += preco_novo;
            qtd_produtos++;
            
            printf("Codigo: %d | Preco novo: R$ %.2f\n", codigo, preco_novo);
        }
    }

    if(qtd_produtos > 0) {
        printf("\nMedia dos precos antigos: R$ %.2f\n", soma_antigo/qtd_produtos);
        printf("Media dos precos novos: R$ %.2f\n", soma_novo/qtd_produtos);
    } else {
        printf("Nenhum produto foi cadastrado.\n");
    }
    
    printf("Programa encerrado.\n");
    return 0;
}