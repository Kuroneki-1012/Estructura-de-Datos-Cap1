#include <stdio.h>

int main() {
    int n;
    long op_lineal = 0;
    long op_cuadratica = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        op_lineal++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            op_cuadratica++;
        }
    }

    printf("\n--- ESTIMACION DE COMPLEJIDAD ---\n");
    printf("Operaciones en ciclo unico (O(n)):   %ld\n", op_lineal);
    printf("Operaciones en ciclos anidados (O(n^2)): %ld\n", op_cuadratica);

    return 0;
}