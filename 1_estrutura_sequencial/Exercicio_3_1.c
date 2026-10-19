#include <stdio.h>

int main(void) {
    int numero1, numero2, numero3, numero4, soma;


    printf("Digite o primeiro numero:  ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:  ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero:  ");
    scanf("%d", &numero3);

    printf("Digite o quarto numero:  ");
    scanf("%d", &numero4);

    soma = numero1 + numero2 + numero3 + numero4;
    printf("A soma é: %d\n", soma);

    return 0;
}