#include <stdio.h>

int *arreglo_dinamico(int tamano){

    int *arr = (int *)malloc(tamano * sizeof(int));

if (arr == NULL){
    printf("Error al asignar memoria\n");
    return NULL;
}
}
