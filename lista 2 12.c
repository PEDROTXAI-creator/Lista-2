#include <stdio.h>

int main() {
    int n;
    
    printf("Digite 20 valores inteiros:\n");
    
    for(int i = 0; i < 20; i++) {
        printf("\nValor %d: ", i+1);
        scanf("%d", &n);
        
        printf("\nTabuada do %d:\n", n);
        for(int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j*n);
        }
    }
    
    return 0;
}
