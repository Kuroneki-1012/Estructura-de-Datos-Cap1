#include <stdio.h>

int main() {
    int registros = 4;
    printf("Estado inicial: %d\n", registros);

    registros += 3;
    printf("Tras sumar 3: %d\n", registros);

    registros *= 2;
    printf("Despues de duplicar: %d\n", registros);

    return 0;
}