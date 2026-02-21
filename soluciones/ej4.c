
#include <stdio.h>
int main(){
    // Resolver ejercicio 4
    long base = 5000;
    long dir3 = 5012;

    long diferencia = dir3 - base;
    long size = diferencia / 3;

    long dir5 = base + 5*size;

    printf("Tamanio del tipo = %ld bytes\n", size);
    printf("Direccion de a[5] = %ld\n", dir5);
    return 0;
}
