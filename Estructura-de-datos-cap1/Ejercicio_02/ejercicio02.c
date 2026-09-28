#include <stdio.h>
#include <stdbool.h>

int main() {
    int id = 101;
    int edad = 20;
    float promedio = 18.75;
    char categoria = 'A';
    bool es_valido = false;

    printf("\n--- Informacion del registro ---\n");
    printf("ID:                   %d\n", id);
    printf("Edad:                 %d años\n", edad);
    printf("Valor Promedio:       %.2f\n", promedio);
    printf("Categoria:            %c\n", categoria);
    printf("Estado de Validez:    %s\n", es_valido ? "Valido" : "Invalido");

    return 0;
}