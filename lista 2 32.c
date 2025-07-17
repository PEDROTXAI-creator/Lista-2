#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite 5 pares de valores (a < b):\n");
    for(int i = 0; i < 5; i++) {
        printf("Par %d: ", i+1);
        scanf("%d %d", &a, &b);
        
        printf("Pares entre %d e %d: ", a, b);
        for(int j = a; j <= b; j++) {
            if(j % 2 == 0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    
    return 0;
}