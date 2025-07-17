#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    
    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    
    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    int dias1 = ano1*360 + mes1*30 + dia1;
    int dias2 = ano2*360 + mes2*30 + dia2;
    
    printf("Diferenca: %d dias\n", dias2 > dias1 ? dias2 - dias1 : dias1 - dias2);
    return 0;
}