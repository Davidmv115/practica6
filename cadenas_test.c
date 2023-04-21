/******************************************************************************
programar una funcion para buscar un caracter en una cadena, regresa -1 si el caracter no esta en
la cadena o la posicion del caracter dentro de la cadena 
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include "cadenas.h"

#define MAX_LENGTH 100

int main() {
    char cadena[MAX_LENGTH], caracter;
    int posicion;

    printf("introduce una cadena de caracteres:\n");
    fgets(cadena, MAX_LENGTH, stdin);

    printf("introduce un caracter a buscar:\n");
    scanf("%c", &caracter);

    posicion = buscar(caracter, cadena);

    if (posicion == -1) {
        printf("El caracter no se encuentra en la cadena\n");
    } else {
        printf("El caracter se encuentra en la posición %d de la cadena\n", posicion);
    }

    return 0;
}


