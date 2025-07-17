#include <stdio.h>

int main() {
    int N, p, fatN = 1, fatP = 1, fatNP = 1;
    
    printf("Digite N e p: ");
    scanf("%d %d", &N, &p);
    
    for(int i = 1; i <= N; i++) fatN *= i;
    for(int i = 1; i <= p; i++) fatP *= i;
    for(int i = 1; i <= (N-p); i++) fatNP *= i;
    
    printf("Arranjo: %d\n", fatN/fatNP);
    printf("Combinacao: %d\n", fatN/(fatP*fatNP));
    return 0;
}