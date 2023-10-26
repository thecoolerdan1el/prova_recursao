#include <stdio.h>

int recursivo(int n){
    int resultado;

    if(n == 1){
        resultado = 2;
    }
    else{
        resultado = recursivo(n - 1) * - 1;
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