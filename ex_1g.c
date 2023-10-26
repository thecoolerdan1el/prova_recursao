#include <stdio.h>

int recursivo(int n){
    int resultado;

    if(n == 1){
        resultado = 1;
    }
    else if(n == 2){
        resultado = 2;
    }
    else if(n == 3){
        resultado = 3;
    }
    else{
        resultado = recursivo(n - 1) + 2 * recursivo(n - 2) + 3 * recursivo(n - 3);
    }

    return resultado;
}

int main(){
    int n, resultado;
    printf("Entre com o termo N: "); scanf("%d", &n);
    
    resultado = recursivo(n);

    printf("%d\n", resultado);

    return 0;
}