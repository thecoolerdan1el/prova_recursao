//Questao 9


#include <stdio.h>

int triangulo (int n){
    if (n == 1)
        return 1;
    else 
        return (triangulo(n-1)+n);

}
int main(){
    int n;
    printf("insira o n-esimo numero: ");
    scanf("%d", &n);
    printf("[%d] O numero vai ser: %d", n, triangulo(n));
}