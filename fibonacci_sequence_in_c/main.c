/* Criado por; João Víctor Costa de Oliveira
 * Data: 10/10/2018
 * Linguagem: C (Versão: C99)
 * */


#include <stdio.h>
int cal_fib(int numero_de_parada);
int main(void) {
    int numero_de_parada;
    printf("Digite o termo de parada da sequencia:");
    scanf("%d", &numero_de_parada);
    cal_fib(numero_de_parada);

    return 0;
}

int cal_fib(int numero_de_parada){
    int i, fib1 = 1, fib2 = 1, soma;
    printf("1 ");
    for (i = 3; i <= numero_de_parada+1; i = i + 1) {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        printf("%d ", fib1);
    }
}
