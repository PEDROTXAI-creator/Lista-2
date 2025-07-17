#include <stdio.h>

int main() {
    int idade, maior_idade = 0;
    int sexo;          
    int cor_olhos;     
    int cor_cabelos;   
    int qtd_especial = 0;
    int continuar = 1; 
    
    printf("Pesquisa de habitantes (idade -1 para encerrar):\n");
    
    while(continuar == 1) {
        printf("\nDados do habitante:\n");
        printf("Idade: ");
        scanf("%d", &idade);
        
        if(idade == -1) {
            printf("Finalizando a coleta de dados...\n");
            continuar = 0;
        } else {
            if(idade > maior_idade) {
                maior_idade = idade;
            }
            
            printf("Sexo (1-Masculino, 2-Feminino): ");
            scanf("%d", &sexo);
            printf("Cor dos olhos (1-Azuis, 2-Verdes, 3-Castanhos): ");
            scanf("%d", &cor_olhos);
            printf("Cor dos cabelos (1-Louros, 2-Castanhos, 3-Pretos): ");
            scanf("%d", &cor_cabelos);

            if(sexo == 2 && 
               idade >= 18 && idade <= 35 && 
               cor_olhos == 2 && 
               cor_cabelos == 1) {
                qtd_especial++;
            }
        }
    }

    printf("\nResultados da pesquisa:\n");
    printf("a) Maior idade do grupo: %d\n", maior_idade);
    printf("b) Quantidade de mulheres 18-35, olhos verdes e cabelos louros: %d\n", qtd_especial);
    printf("Pesquisa concluída.\n");
    
    return 0;
}