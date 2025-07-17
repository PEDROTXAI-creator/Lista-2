#include <stdio.h>

int main() {
    int idade, maior_idade = 0, menor_idade = 150;
    int sexo; 
    float salario, soma_salario = 0;
    int total_pessoas = 0, mulheres_ate_100 = 0;
    int continuar = 1; 
    
    printf("Pesquisa de habitantes (digite idade negativa para encerrar):\n");
    
    while(continuar == 1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade < 0) {
            printf("Encerrando a pesquisa...\n");
            continuar = 0;
        } else {
            printf("Sexo (1-Masculino, 2-Feminino): ");
            scanf("%d", &sexo);
            printf("Salario: ");
            scanf("%f", &salario);

            if(idade > maior_idade) maior_idade = idade;
            if(idade < menor_idade) menor_idade = idade;
            
            soma_salario += salario;
            total_pessoas++;

            if(sexo == 2 && salario <= 100.00) {
                mulheres_ate_100++;
            }
        }
    }

    if(total_pessoas > 0) {
        printf("\na) Media de salario: R$ %.2f\n", soma_salario/total_pessoas);
        printf("b) Maior idade: %d | Menor idade: %d\n", maior_idade, menor_idade);
        printf("c) Mulheres com salario ate R$100,00: %d\n", mulheres_ate_100);
    } else {
        printf("Nenhum dado foi informado.\n");
    }
    
    printf("Programa finalizado.\n");
    return 0;
}