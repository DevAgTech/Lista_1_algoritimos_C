#include <stdio.h>

int main(void) {
    int codigo;
    float salario, aumento, novoSalario;

    printf("Digite o codigo do cargo (1 a 5): ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (codigo == 1) {
        aumento = salario * 0.50;
        printf("Cargo: Escriturario\n");
    } else if (codigo == 2) {
        aumento = salario * 0.35;
        printf("Cargo: Secretario\n");
    } else if (codigo == 3) {
        aumento = salario * 0.20;
        printf("Cargo: Caixa\n");
    } else if (codigo == 4) {
        aumento = salario * 0.10;
        printf("Cargo: Gerente\n");
    } else if (codigo == 5) {
        aumento = 0;
        printf("Cargo: Diretor\n");
    } else {
        printf("Codigo invalido!\n");
        return 0;
    }

    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}