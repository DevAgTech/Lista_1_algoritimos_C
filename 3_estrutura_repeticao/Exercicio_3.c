#include <stdio.h>

int main(void) {
    int ano;
    float salario = 1000.00;
    float percentual = 1.5;

    for (ano = 1996; ano <= 2026; ano++) {
        salario = salario + (1000.00 * percentual / 100.00);

        percentual = percentual * 2;
    }

    printf("Salario em 2026: R$ %.2f\n", salario);

    return 0;
}