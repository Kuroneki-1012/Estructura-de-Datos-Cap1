#include <stdio.h>

int main() {
    float mediciones[10];
    float suma = 0.0, media;
    int mayores_media = 0;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese la medicion %d: ", i + 1);
        scanf("%f", &mediciones[i]);
        suma += mediciones[i];
    }

    media = suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (mediciones[i] > media) {
            mayores_media++;
        }
    }

    printf("\nMedia aritmetica: %.2f\n", media);
    printf("Observaciones por encima de la media: %d\n", mayores_media);

    return 0;
}