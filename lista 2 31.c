#include <stdio.h>

int main() {
    int num, dentro = 0, fora = 0;
    
    printf("Digite 10 valores:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        if(num >= 10 && num <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }
    
    printf("\nDentro do intervalo [10,20]: %d\n", dentro);
    printf("Fora do intervalo [10,20]: %d\n", fora);
    
    return 0;
}