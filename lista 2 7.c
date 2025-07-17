#include <stdio.h>

int main() {
    int codigo, continuar = 1;
    float n1, n2, n3;
    
    printf("Calculo de media (digite 0 no codigo para encerrar)\n");
    
    while(continuar) {
        printf("\nCodigo do aluno: ");
        scanf("%d", &codigo);
        
        if(codigo == 0) {
            continuar = 0;  
        } else {
            printf("Nota 1: "); scanf("%f", &n1);
            printf("Nota 2: "); scanf("%f", &n2);
            printf("Nota 3: "); scanf("%f", &n3);
            
            float media = (n1 + n2 + n3) / 3;
            printf("Media do aluno %d: %.2f\n", codigo, media);
        }
    }
    
    return 0;
}