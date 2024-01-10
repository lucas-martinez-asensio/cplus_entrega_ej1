#include <stdio.h>

int main() {
    int i;
    char tamanioTaza;
    int cantVentas;
    float precioUnitario;
    int acuCant;
    float montoUnico;
    float acuMontos;
    int cantFinal = 0;
    float montoFinal = 0;
    float minMonto;
    int minDia;

    for(i = 0; i < 7; i++){
        acuCant = 0;
        acuMontos = 0;
        montoUnico = 0;

        printf("Ingresa el tamaño de la taza (pequeña 'P', mediana 'M' o grande 'G' o 'X' para terminar): \n");
        fflush(stdin);
        scanf("%c",&tamanioTaza);

        while((tamanioTaza != 'X') && (tamanioTaza != 'x')){
            printf("Ingresa las ventas de dichas tazas: \n");
            fflush(stdin);
            scanf("%i",&cantVentas);

            printf("Ingresa el precio unitario de dichas tazas: \n");
            scanf("%f",&precioUnitario);

            acuCant += cantVentas;
            cantFinal += cantVentas;

            montoUnico = (float)precioUnitario*cantVentas;
            acuMontos += montoUnico;
            montoFinal += montoUnico;

            printf("Ingresa el tamaño de la taza (pequeña 'P', mediana 'M' o grande 'G' o 'X' para terminar): \n");
            fflush(stdin);
            scanf("%c",&tamanioTaza);

        }

        if(i==0){
            minDia = i + 1;
            minMonto = acuMontos;
        }else{
            if(acuMontos < minMonto){
                minMonto = acuMontos;
                minDia = i + 1;
            }
        }
        printf("DIA %i - \Cantidad vendidas del dia: %i \nMonto total del dia: $%.2f \n",i + 1,acuCant,acuMontos);
    }

    printf("\nLa cantidad total de tazas vendidas es %i por un monto final de $%.2f\n",cantFinal,montoFinal);
    printf("El dia con menor ventas es el DIA %i con un monto de $%.2f\n",minDia,minMonto);

    return 0;
}
