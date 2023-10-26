// Ex 4:
#include <stdio.h>

int pertence(int n) {
    if (n == 2 || n == 3) {
        return 1; 
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0 && pertence(i) && pertence(n / i)) {
            return 1; 
        }
    }

    return 0; 
}

int main() {
    int numeros[] = {6, 9, 16, 21, 26, 54, 72, 218};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < tamanho; ++i) {
        if (pertence(numeros[i])) {
            printf("%d pertence a M\n", numeros[i]);
        } else {
            printf("%d nao pertence a M\n", numeros[i]);
        }
    }

    return 0;

    
}
