#include <stdio.h>

int main() {
    int observaciones;
    float porcentaje_completos;

    printf("Ingrese numero de observaciones: ");
    scanf("%d", &observaciones);
    printf("Ingrese el porcentaje de datos completos: ");
    scanf("%f", &porcentaje_completos);

    if (observaciones >= 100 && porcentaje_completos >= 70.0) {
        printf("\n[ACEPTADO] El conjunto cumple los requisitos para ser analizado.\n");
    } else {
        printf("\n[RECHAZADO] No cumple con los criterios minimos requeridos.\n");
    }

    return 0;
}