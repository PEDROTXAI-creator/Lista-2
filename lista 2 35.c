#include <stdio.h>

int main() {
    float altura, maior = 0, menor = 3, soma_mulheres = 0, soma_total = 0;
    int sexo, qtd_mulheres = 0;
    
    printf("Digite as 50 informacoes (altura e sexo (masculino 1, feminino 2)):\n");
    for(int i = 0; i < 50; i++) {
        printf("Pessoa %d: ", i+1);
        scanf("%f %d", &altura, &sexo);
        
        if(altura > maior) maior = altura;
        if(altura < menor) menor = altura;
        
        soma_total += altura;
        
        if(sexo == 2) {
            soma_mulheres += altura;
            qtd_mulheres++;
        }
    }
    
    printf("\na) Maior altura: %.2f | Menor altura: %.2f\n", maior, menor);
    printf("b) Media altura mulheres: %.2f\n", soma_mulheres/qtd_mulheres);
    printf("c) Media altura turma: %.2f\n", soma_total/50);
    
    return 0;
}