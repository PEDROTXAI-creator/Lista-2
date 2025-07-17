#include <stdio.h>

int main() {
    int n, m;
    int somatorio, fatorial;
    
    printf("Digite quantos valores serao lidos (n): ");
    scanf("%d", &n);
    
    printf("\nValor | Somatorio | Fatorial\n");
    printf("------|-----------|---------\n");
    
    for(int i = 0; i < n; i++) {
        printf("Digite o %dº valor (m): ", i+1);
        scanf("%d", &m);

        somatorio = 0;
        for(int j = 1; j <= m; j++) {
            somatorio += j;
        }

        fatorial = 1;
        for(int j = 2; j <= m; j++) {
            fatorial *= j;
        }

        printf("%5d | %9d | %8d\n", m, somatorio, fatorial);
    }
    
    return 0;
}