#include <stdio.h>

int main() {
    printf("Numeros impares entre 100 e 200:\n");
    for(int i = 101; i <= 199; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}