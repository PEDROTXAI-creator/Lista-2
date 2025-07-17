#include <stdio.h>

int main() {
    int codigo, veiculos, acidentes;
    int estado; 
    int maior_acidentes = -1, menor_acidentes = -1;
    int cod_maior = 0, cod_menor = 0;
    int total_veiculos = 0;
    int cidades_RS = 0, acidentes_RS = 0;
    int continuar = 1;
    int cidades_processadas = 0;

    printf("Cadastro de dados das 200 cidades:\n");

    while(continuar == 1 && cidades_processadas < 200) {
        printf("\nCidade %d:\n", cidades_processadas + 1);
        printf("Código: ");
        scanf("%d", &codigo);
        printf("Estado (1-RS, 2-SC, 3-PR, 4-SP, 5-RJ,6-AP, 7-PA, ...): ");
        scanf("%d", &estado);
        printf("Número de veículos: ");
        scanf("%d", &veiculos);
        printf("Acidentes com vítimas: ");
        scanf("%d", &acidentes);

        if(maior_acidentes == -1 || acidentes > maior_acidentes) {
            maior_acidentes = acidentes;
            cod_maior = codigo;
        }
        if(menor_acidentes == -1 || acidentes < menor_acidentes) {
            menor_acidentes = acidentes;
            cod_menor = codigo;
        }

        total_veiculos += veiculos;

        if(estado == 1) {
            acidentes_RS += acidentes;
            cidades_RS++;
        }

        cidades_processadas++;

        if(cidades_processadas < 200) {
            printf("Deseja continuar? (1-Sim, 0-Não): ");
            scanf("%d", &continuar);
        } else {
            printf("Limite de 200 cidades atingido.\n");
        }
    }

    printf("\n--- Resultados ---\n");
    printf("a) Maior índice: %d (Cidade %d)\n", maior_acidentes, cod_maior);
    printf("   Menor índice: %d (Cidade %d)\n", menor_acidentes, cod_menor);
    
    if(cidades_processadas > 0) {
        printf("b) Média de veículos: %.2f\n", (float)total_veiculos/cidades_processadas);
    } else {
        printf("b) Nenhuma cidade cadastrada\n");
    }

    if(cidades_RS > 0) {
        printf("c) Média de acidentes no RS: %.2f\n", (float)acidentes_RS/cidades_RS);
    } else {
        printf("c) Nenhuma cidade do RS cadastrada\n");
    }

    return 0;
}