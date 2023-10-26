#include <stdio.h>
#include <math.h>

int recursivo(int n){
    int resultado;
    if(n == 1){
        resultado = 1;
    }
    else{
        resultado = recursivo(n - 1) + pow(n,2);
    }

    return resultado;
}

int main(){
    int n, resultado;
    printf("Entre com o número N: "); scanf("%d", &n);

    resultado = recursivo(n);

    printf("%d\n", resultado);

    return 0;
}
