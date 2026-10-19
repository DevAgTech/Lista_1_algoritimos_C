#include <stdio.h>

int main(void) {
    int N, numero, i, j;
    unsigned long long fatorial;

    printf("Quantos numeros deseja informar? ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        fatorial = 1;

        for (j = 1; j <= numero; j++) {
            fatorial = fatorial * j;
        }

        printf("Numero: %d | Fatorial: %llu\n", numero, fatorial);
    }

    return 0;
}