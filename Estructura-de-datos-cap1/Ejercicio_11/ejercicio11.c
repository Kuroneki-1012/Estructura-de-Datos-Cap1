#include <stdio.h>

int main() {
    const int Clave_Correcta = 101205;
    int clave_ingresada = 0;
    int intentos = 0;

    while (clave_ingresada != Clave_Correcta) {
        printf("Ingrese la clave numerica de 6 digitos: ");
        scanf("%d", &clave_ingresada);
        intentos++;

        if (clave_ingresada != Clave_Correcta) {
            printf("Clave incorrecta. Intente de nuevo.\n");
        }
    }

    printf("\n¡Acceso concedido! Total de intentos realizados: %d\n", intentos);

    return 0;
}