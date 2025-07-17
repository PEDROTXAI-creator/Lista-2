#include <stdio.h>

int main() {
    int n;
    float S = 0;
    
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    
    printf("\nTermos da serie:\n");
    for(int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if(i < n) printf(" + ");
        S += 1.0/i;
    }
    
    printf("\n\nSoma total: %.4f\n", S);
    return 0;
}