#include <stdio.h>

int main(void) {
    float pi, raio, raio2, area;

    printf("Digite o valor do raio:  ");
    scanf("%f", &raio);

    pi = 3.14159;
    raio2 = raio*raio;
    area = pi * raio2;
    printf(" valor da area é: %.2f\n", area);

    return 0;
}