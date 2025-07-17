#include <stdio.h>

int main() {
    int N, fatorial = 1;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        fatorial *= i;
    }
    
    printf("%d! = %d\n", N, fatorial);
    return 0;
}