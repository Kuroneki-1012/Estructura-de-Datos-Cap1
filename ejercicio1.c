#include <stdio.h>
int main()
{
    int horas;
    float costo_hora, costo_total;
    
    printf("Ingrese las horas trabajadas: \n");
    scanf("%d", &horas);
    printf("ingrese el costo por hora: \n");
    scanf("%f", &costo_hora);
    
    costo_total = horas * costo_hora;
    
    printf("\n-----Resumen de trabajo-----\n");
    printf("Las horas trabajadas son    %d horas \n",horas);
    printf("El pago por hora es de $ %.2f  \n", costo_hora);
    printf("Total a pagar: $%.2f \n",costo_total);
    
    return 0;
}