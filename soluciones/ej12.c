
#include <stdio.h>
int main(){
    // Resolver ejercicio 12
    int columnas = 5;
    int size = 4;
    long base = 4000;

    long dir1 = base + ((2*columnas + 4)*size);
    long dir2 = base + ((1*columnas + 3)*size);

    printf("m[2][4] = %ld\n", dir1);
    printf("m[1][3] = %ld\n", dir2);
    printf("Diferencia = %ld\n", dir1 - dir2);
    return 0;
}
