#include <stdio.h>
#include <math.h>

int recursivo(int a, int q, int n) {
    int resultado;
    if (n == 1) {
        resultado = a;
    } else {
        resultado = a * recursivo(a, q, n - 1);
    }
    return resultado;
}

int main() {
    int a, q, n, resultado;
    printf("Entre com o número n: ");
    scanf("%d", &n);
    printf("Entre com o número a (termo inicial): ");
    scanf("%d", &a);
    printf("Entre com o número q (razão): ");
    scanf("%d", &q);

    resultado = recursivo(a, q, n);
    printf("%d\n", resultado);

    return 0;
}

