#include <stdio.h>

int main(void) {
    float salarioatual, novosalario;

    printf("Digite seu salario:  ");
    scanf("%f", &salarioatual);

    novosalario = salarioatual * 1.25;
    printf("O seu salario apos aumento é: %.2f\n", novosalario);

    return 0;
}