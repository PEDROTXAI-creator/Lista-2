#include <stdio.h>

int main() {
    int numero, mais_alto_num, mais_baixo_num;
    int altura, mais_alto = 0, mais_baixo = 300;
    
    printf("Digite dados de 5 alunos (numero e altura em cm):\n");
    for(int i = 0; i < 5; i++) {
        printf("Aluno %d: ", i+1);
        scanf("%d %d", &numero, &altura);
        
        if(altura > mais_alto) {
            mais_alto = altura;
            mais_alto_num = numero;
        }
        
        if(altura < mais_baixo) {
            mais_baixo = altura;
            mais_baixo_num = numero;
        }
    }
    
    printf("\nAluno mais alto: %d (%d cm)\n", mais_alto_num, mais_alto);
    printf("Aluno mais baixo: %d (%d cm)\n", mais_baixo_num, mais_baixo);
    
    return 0;
}