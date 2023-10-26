//b

#include <stdio.h>

double sequencia_b (int n){
    if (n == 1)
        return 2;
    else 
        return (sequencia_b(n-1)/2);

}
double main(){
    int n;
    printf("insira o n-esimo numero: ");
    scanf("%d", &n);
    printf("[%d] O numero vai ser: %f", n, sequencia_b(n));
}
