#include <stdio.h>

int main() {
    printf("Numeros entre 1000 e 1999 que divididos por 11 dao resto 5:\n");
    for(int i = 1000; i <= 1999; i++) {
        if(i % 11 == 5) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}