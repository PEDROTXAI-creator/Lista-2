#include <stdio.h>

int main() {
    int primos[20] = {1, 2, 3};
    int count = 3, num = 4;
    
    while(count < 20) {
        int primo = 1;
        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                primo = 0;
                break;
            }
        }
        if(primo) {
            primos[count] = num;
            count++;
        }
        num++;
    }
    
    printf("20 primeiros primos:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");
    
    return 0;
}