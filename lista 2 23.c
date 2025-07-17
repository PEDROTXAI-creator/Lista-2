#include <stdio.h>

int main() {
    int sexo;         
    int cor_olhos;   
    int cor_cabelos;  
    int idade;
    int continuar = 1; 
    
    printf("Pesquisa de características físicas (digite idade negativa para encerrar):\n");
    
    while(continuar == 1) {
        printf("\nDados do habitante:\n");
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        if(idade < 0) {
            printf("Encerrando coleta de dados...\n");
            continuar = 0;
        } else {
            printf("Sexo (1-Masculino, 2-Feminino): ");
            scanf("%d", &sexo);
            
            printf("Cor dos olhos (1-Azuis, 2-Verdes, 3-Castanhos): ");
            scanf("%d", &cor_olhos);
            
            printf("Cor dos cabelos (1-Louros, 2-Castanhos, 3-Pretos): ");
            scanf("%d", &cor_cabelos);

            printf("Dados registrados com sucesso!\n");
        }
    }
    
    return 0;
}