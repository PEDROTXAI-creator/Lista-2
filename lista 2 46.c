#include <stdio.h>

int main() {
    int sexo, olhos, cabelos; 
    int idade, maior_idade = 0, qtd_especial = 0;
    
    printf("Pesquisa com 500 pessoas:\n");
    for(int i = 0; i < 500; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Sexo (1-M, 2-F): "); scanf("%d", &sexo);
        printf("Olhos (1-A, 2-V, 3-C): "); scanf("%d", &olhos);
        printf("Cabelos (1-L, 2-C, 3-P): "); scanf("%d", &cabelos);
        printf("Idade: "); scanf("%d", &idade);
        
        if(idade > maior_idade) maior_idade = idade;
        
        if(sexo == 2 && idade >= 18 && idade <= 35 && olhos == 2 && cabelos == 1) {
            qtd_especial++;
        }
    }
    
    printf("\nMaior idade: %d\n", maior_idade);
    printf("Mulheres 18-35, olhos verdes e cabelos louros: %d\n", qtd_especial);
    return 0;
}