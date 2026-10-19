#include <stdio.h>

int main(void) {
    int i, resultado;

    for (i = 1; i <= 10; i++) {
        resultado = 1 * i;

        printf("1 x %d = %d\n", i, resultado);
    }

    return 0;
}