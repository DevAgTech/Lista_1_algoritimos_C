#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("O maior numero e: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("O maior numero e: %d\n", b);
    } else {
        printf("O maior numero e: %d\n", c);
    }

    return 0;
}