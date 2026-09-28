#include <stdio.h>

int main() {
    int registros, nodos;

    printf("Ingrese el numero total de registros: ");
    scanf("%d", &registros);
    printf("Ingrese el numero de nodos: ");
    scanf("%d", &nodos);

    if (nodos > 0) {
        int por_nodo = registros / nodos;
        int no_distribuidos = registros % nodos;

        printf("\nCada nodo procesa: %d registros\n", por_nodo);
        printf("Registros sin distribuir: %d registros\n", no_distribuidos);
    } else {
        printf("El numero de nodos debe ser mayor a cero.\n");
    }

    return 0;
}