#include <stdio.h>

int main() {
    float medicion;
    int valor_entero;
    float perdida;

    printf("Ingrese un numero decimal: \n");
    scanf("%f", &medicion);

    valor_entero = (int)medicion;
    perdida = medicion - valor_entero;

    printf("\nValor original: %.2f\n", medicion);
    printf("Valor convertido en entero: %d\n", valor_entero);
    printf("Valor decimal perdido:  %.2f\n", perdida);

    return 0;
}