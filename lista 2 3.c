#include <stdio.h>

int main() {
    int num_pessoas = 0, filhos, total_filhos = 0, salario_ate_100 = 0;
    float salario, total_salario = 0, maior_salario = 0;

    printf("Pesquisa da prefeitura (digite salario negativo para encerrar):\n");

    do {
        printf("\nPessoa %d:\n", num_pessoas + 1);
        printf("Salario: ");
        scanf("%f", &salario);

        if(salario >= 0) {
            printf("Numero de filhos: ");
            scanf("%d", &filhos);

            total_salario += salario;
            total_filhos += filhos;
            num_pessoas++;

            if(salario > maior_salario) {
                maior_salario = salario;
            }

            if(salario <= 100.0) {
                salario_ate_100++;
            }
        }
    } while(salario >= 0);

    if(num_pessoas > 0) {
        printf("\nResultados:\n");
        printf("a) Media salarial: %.2f\n", total_salario / num_pessoas);
        printf("b) Media de filhos: %.2f\n", (float)total_filhos / num_pessoas);
        printf("c) Maior salario: %.2f\n", maior_salario);
        printf("d) Percentual com salario ate R$100,00: %.2f%%\n", 
              (float)salario_ate_100 / num_pessoas * 100);
    } else {
        printf("\nNenhum dado foi registrado.\n");
    }

    return 0;
}