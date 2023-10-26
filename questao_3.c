#include <stdio.h>

int pertence(int n) {
    if (n == 2) {
        return 1;
    }

    if (n > 2) {
        return pertence(n - 3) || pertence(n / 2);
    }

    return 0;
}

int main() {

    int numeros[] = {6, 7, 19, 12};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 
    printf("Tamanho: %d\n", tamanho);

    for (int i = 0; i < tamanho; ++i) { 
        if (pertence(numeros[i])) {
            printf("%d pertence a T\n", numeros[i]);
        }
    }

    return 0;
}
