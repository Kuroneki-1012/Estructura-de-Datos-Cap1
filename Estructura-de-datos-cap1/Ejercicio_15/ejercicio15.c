#include <stdio.h>

float calcular_promedio(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3.0;
}

int contar_sobre_promedio(float m1, float m2, float m3, float promedio) {
    int contador = 0;
    if (m1 > promedio) contador++;
    if (m2 > promedio) contador++;
    if (m3 > promedio) contador++;
    return contador;
}

int main() {
    float m1, m2, m3;

    printf("Ingrese la primera medicion: ");
    scanf("%f", &m1);
    printf("Ingrese la segunda medicion: ");
    scanf("%f", &m2);
    printf("Ingrese la tercera medicion: ");
    scanf("%f", &m3);

    float prom = calcular_promedio(m1, m2, m3);
    int sobre_prom = contar_sobre_promedio(m1, m2, m3, prom);

    printf("\nPromedio de las mediciones: %.2f\n", prom);
    printf("Mediciones por encima del promedio: %d\n", sobre_prom);

    return 0;
}