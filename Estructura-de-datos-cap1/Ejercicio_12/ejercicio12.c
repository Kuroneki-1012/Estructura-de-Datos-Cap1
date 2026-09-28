#include <stdio.h>

int main() {
    float medicion;
    int validos = 0;

    printf("Procesamiento de mediciones\n");
    printf("999 para salir, los numeros negativos se ignoran\n");

    for (int i = 0; i < 10; i++) {
        printf("Medicion %d: ", i + 1);
        scanf("%f", &medicion);

        if (medicion == 999) {
            printf("Se introdujo el valor 999. Interrumpiendo secuencia...\n");
            break;
        }

        if (medicion < 0) {
            printf("Valor negativo detectado. Se omite.\n");
            continue;
        }

        validos++;
    }

    printf("\nTotal de valores validos procesados: %d\n", validos);

    return 0;
}