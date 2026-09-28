#include <stdio.h>

int main() {
    int edades[10];
    int suma = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese la edad del participante %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }

    media = (float)suma / 10.0;

    int min = edades[0];
    int max = edades[0];
    int mayores_que_media = 0;

    for (int i = 0; i < 10; i++) {
        if (edades[i] < min) min = edades[i];
        if (edades[i] > max) max = edades[i];
        if (edades[i] > media) mayores_que_media++;
    }

    printf("\n----- Resultados -----\n");
    printf("Edad Minima:                %d\n", min);
    printf("Edad Maxima:                %d\n", max);
    printf("Media de Edad:              %.2f\n", media);
    printf("Participantes sobre la media: %d\n", mayores_que_media);

    return 0;
}