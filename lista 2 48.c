#include <stdio.h>

int main() {
    int matricula;
    float nota;
    
    printf("Cadastro de 75 alunos:\n");
    for(int i = 0; i < 75; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Matricula: "); scanf("%d", &matricula);
        printf("Nota: "); scanf("%f", &nota);
        
        printf("Conceito: ");
        if(nota >= 0 && nota < 5) printf("D\n");
        else if(nota < 7) printf("C\n");
        else if(nota < 9) printf("B\n");
        else if(nota <= 10) printf("A\n");
        else printf("Invalido\n");
    }
    
    return 0;
}