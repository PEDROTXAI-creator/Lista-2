#include <stdio.h>

int main() {
    int voto;
    int votos[6] = {0}; 
    int continuar = 1;

    printf("Eleicao presidencial (digite 0 para encerrar):\n");

    while(continuar == 1) {
        printf("Digite o codigo do voto (1-6): ");
        scanf("%d", &voto);

        if(voto == 0) {
            continuar = 0;
        } else if(voto >= 1 && voto <= 6) {
            votos[voto]++;
        } else {
            printf("Codigo invalido!\n");
        }
    }

    printf("\nResultados da eleicao:\n");
    for(int i = 1; i <= 4; i++) {
        printf("Candidato %d: %d votos\n", i, votos[i]);
    }
    printf("Votos nulos: %d\n", votos[5]);
    printf("Votos em branco: %d\n", votos[6]);

    return 0;
}