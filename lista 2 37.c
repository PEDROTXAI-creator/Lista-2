#include <stdio.h>

int main() {
    float X, termo;
    
    printf("Digite o valor de X: ");
    scanf("%f", &X);
    
    printf("\n20 primeiros termos da serie:\n");
    for(int i = 1; i <= 20; i++) {
        termo = 1;
        for(int j = 1; j <= i; j++) {
            termo *= X;
        }
        printf("1/%d^%d = %.9f\n", (int)X, i, 1/termo);
    }
    
    return 0;
}