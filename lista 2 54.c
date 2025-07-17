#include <stdio.h>

int main() {
    float a, b;
    
    printf("Digite dois numeros diferentes: ");
    scanf("%f %f", &a, &b);
    
    if(a == b) {
        printf("Os numeros devem ser diferentes!\n");
        return 1;
    }
    
    if(a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    
    float intervalo = (b - a) / 3;
    
    printf("Intervalo dividido:\n");
    printf("1a parte: %.2f a %.2f\n", a, a + intervalo);
    printf("2a parte: %.2f a %.2f\n", a + intervalo, a + 2*intervalo);
    printf("3a parte: %.2f a %.2f\n", a + 2*intervalo, b);
    
    return 0;
}