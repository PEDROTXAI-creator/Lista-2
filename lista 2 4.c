#include <stdio.h>

int main() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;
    
    while(ze <= chico) {
        chico += 0.02;  // 2 cm = 0.02 m
        ze += 0.03;     // 3 cm = 0.03 m
        anos++;
    }
    
    printf("Serao necessarios %d anos para Ze ser maior que Chico.\n", anos);
    printf("Altura final - Chico: %.2fm, Ze: %.2fm\n", chico, ze);
    
    return 0;
}