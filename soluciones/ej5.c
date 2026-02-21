
#include <stdio.h>
int main(){
    // Resolver ejercicio 5
     long base = 1000;
    int size = sizeof(int);

    long real = base + 10*size;
    long afirmacion = 1010;

    printf("Direccion real de a[10] = %ld\n", real);
    printf("Afirmacion estudiante = %ld\n", afirmacion);

    if(real == afirmacion)
        printf("Correcto\n");
    else
        printf("Incorrecto\n");
    return 0;
}
