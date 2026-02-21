
#include <stdio.h>
int main(){
    // Resolver ejercicio 8
    long base = 2000;
    long dir = 2024;
    int size = 4;W

    long diferencia = dir - base;
    long posicion = diferencia / size;

    long n = posicion - 2;

    printf("Numero de columnas = %ld\n", n);
    printf("Tamano total si hay 2 filas = %ld bytes\n", 2*n*size);
    return 0;
}
