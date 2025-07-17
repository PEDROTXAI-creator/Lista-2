#include <stdio.h>

int main() {
    int sexo, idade, qtd_homens = 0, qtd_total = 0, qtd_18_35 = 0;
    float altura, soma_idade = 0, soma_altura_mulheres = 0, soma_idade_homens = 0;
    
    printf("Pesquisa com 1000 habitantes:\n");
    printf("sexo (0-feminino, 1-masculino) idade e altura\n");
    for(int i = 0; i < 1000; i++) {
        printf("Habitante %d: ", i+1);
        scanf("%d %d %f", &sexo, &idade, &altura);
        
        soma_idade += idade;
        
        if(sexo == 0) {
            soma_altura_mulheres += altura;
        } else {
            soma_idade_homens += idade;
            qtd_homens++;
        }
        
        if(idade >= 18 && idade <= 35) {
            qtd_18_35++;
        }
    }
    
    printf("\na) Media idade grupo: %.2f\n", soma_idade/1000);
    printf("b) Media altura mulheres: %.2f\n", soma_altura_mulheres/(1000-qtd_homens));
    printf("c) Media idade homens: %.2f\n", soma_idade_homens/qtd_homens);
    printf("d) Percentual 18-35 anos: %.2f%%\n", (float)qtd_18_35/10);
    
    return 0;
}