//Questao 10, (a)

#include <stdio.h>

int colonia (int n){
    if (n == 1)
        return 50000;
    else 
        return (colonia(n-1)*3);

}
int main(){ 
    int n;
    printf("insira o n-esimo numero: ");
    scanf("%d", &n);
    printf("Em [%d] horas o numero vai ser: %d\n", n, colonia(n));
}