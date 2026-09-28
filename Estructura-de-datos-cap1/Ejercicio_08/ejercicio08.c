#include <stdio.h>

int main() {
    int edad, es_validado;

    printf("Ingrese la edad del individuo: ");
    scanf("%d", &edad);
    printf("¿El registro esta validado? (1 = Si, 0 = No): ");
    scanf("%d", &es_validado);

    if (edad >= 18 && es_validado == 1) {
        printf("\nResultado: La observacion PUEDE ser incorporada.\n");
    } else {
        printf("\nResultado: La observacion NO puede ser incorporada.\n");
    }

    return 0;
}