
#include <stdio.h>
int main(){
    // Resolver ejercicio 11
    long base = 1000;
    long dir1 = 1008;

    long size = dir1 - base;

    printf("Tamanio del tipo = %ld bytes\n", size);
    printf("Tipo posible: double o long long\n");
    return 0;
}
