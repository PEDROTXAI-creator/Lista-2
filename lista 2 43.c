#include <stdio.h>

int main() {
    float A, B, C, D;
    float temp;
    
    printf("Digite 5 grupos de 4 valores:\n");
    
    for(int grupo = 0; grupo < 5; grupo++) {
        printf("Grupo %d: ", grupo + 1);
        scanf("%f %f %f %f", &A, &B, &C, &D);
        
        printf("Valores originais: %.2f %.2f %.2f %.2f\n", A, B, C, D);

        if(B > A) { temp = A; A = B; B = temp; }
        if(C > A) { temp = A; A = C; C = temp; }
        if(D > A) { temp = A; A = D; D = temp; }

        if(C > B) { temp = B; B = C; C = temp; }
        if(D > B) { temp = B; B = D; D = temp; }

        if(D > C) { temp = C; C = D; D = temp; }
        
        printf("Valores ordenados: %.2f %.2f %.2f %.2f\n\n", A, B, C, D);
    }
    
    return 0;
}