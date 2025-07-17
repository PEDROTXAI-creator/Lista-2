#include <stdio.h>

int main() {
    float n1, n2, n3, mp, soma_geral = 0;
    
    printf("Digite as notas dos 50 alunos:\n");
    for(int i = 0; i < 50; i++) {
        printf("Aluno %d: ", i+1);
        scanf("%f %f %f", &n1, &n2, &n3);
        
        mp = (n1*2 + n2*4 + n3*3) / 10;
        soma_geral += mp;
        
        printf("Media: %.2f - %s\n", mp, mp >= 7 ? "Aprovado" : "Reprovado");
    }
    
    printf("\nMedia geral da turma: %.2f\n", soma_geral/50);
    return 0;
}