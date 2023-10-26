//exercicio 8

//a

#include <stdio.h>

int sequencia_a (int n){
    if (n == 1)
        return 1;
    else 
        return (sequencia_a(n-1)*3);

}
int main(){
    int n;
    printf("insira o n-esimo numero: ");
    scanf("%d", &n);
    printf("[%d] O numero vai ser: %d", n, sequencia_a(n));
}
