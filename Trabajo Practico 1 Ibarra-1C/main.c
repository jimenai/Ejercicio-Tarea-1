#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"

int main()
{
    //int opcion;
    //char seguir = 's';
    int num1;
    int num2;

    num1 = pedirNumero("Ingrese primer numero: ");
    printf("A = %d\n", num1);
    num2 = pedirNumero("Ingrese el segundo numero: ");
    printf("B = %d", num2);

   /* do{
        printf("Elija opcion:\n1.Alta \n2.Baja\n3.Informar\n4.Salir\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("Estoy dando de alta\n");
                break;

            case 2:
                printf("Estoy dando de baja\n");
                break;

            case 3:
                printf("Estoy informando\n");
                break;
            case 4:
                printf("Estoy Saliendo\n");
                seguir = 'n';
                break;
            default:
                printf("No ingreso una opcion valida\n");
        }

    }while(seguir == 's');*/
    return 0;
}
