#include <stdio.h>

int main() {
    int codigo, continuar = 1;
    float nota1, nota2, nota3, maior, media;

    while(continuar == 1) {
        printf("\nDigite o codigo do aluno (negativo para sair): ");
        scanf("%d", &codigo);

        if(codigo < 0) {
            continuar = 0;
        } else {
            printf("Digite as 3 notas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);

            maior = nota1;
            if(nota2 > maior) maior = nota2;
            if(nota3 > maior) maior = nota3;

            media = (maior * 4 + (nota1 + nota2 + nota3 - maior) * 3) / 10;

            printf("Aluno %d - Notas: %.1f, %.1f, %.1f\n", codigo, nota1, nota2, nota3);
            printf("Media: %.1f - %s\n", media, media >= 5.0 ? "APROVADO" : "REPROVADO");
        }
    }

    return 0;
}