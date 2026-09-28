#include <stdio.h>

int main() {
    int alg1, alg2;

    printf("Ingrese registros del Algoritmo 1:\n");
    scanf("%d", &alg1);
    printf("Ingrese registros del Algoritmo 2:\n");
    scanf("%d", &alg2);

    printf("\n-----Resultados-----\n");
    printf("Suma:           %d\n", alg1 + alg2);
    printf("Diferencia:     %d\n", alg1 - alg2);
    printf("Producto:       %d\n", alg1 * alg2);
    
    if (alg2 != 0) {
        printf("Division entera: %d\n", alg1 / alg2);
        printf("Residuo (Modulo): %d\n", alg1 % alg2);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}