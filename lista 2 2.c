#include <stdio.h>

int main() {
    int N;
    float E = 0.0;

    printf("Digite um valor inteiro positivo para N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("O valor deve ser positivo!\n");
        return 1;
    }

    E += 1.0;          
    E += 1.0 / 1;      
    E += 1.0 / 2;      
    E += 1.0 / 6;      

    int n_fatorial = 1;
    for(int i = 1; i <= N; i++) {
        n_fatorial *= i;
    }
    E += 1.0 / n_fatorial; 

    printf("O valor de E eh: %.6f\n", E);
    return 0;
}