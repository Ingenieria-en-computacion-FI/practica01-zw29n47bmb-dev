
#include <stdio.h>
int main(){
    // Resolver ejercicio 3
     int a[3];
    int b[3];
    int c[3];

    printf("Direcciones de a:\n");
    for(int i = 0; i < 3; i++)
        printf("&a[%d] = %p\n", i, (void*)&a[i]);

    printf("\nDirecciones de b:\n");
    for(int i = 0; i < 3; i++)
        printf("&b[%d] = %p\n", i, (void*)&b[i]);

    printf("\nDirecciones de c:\n");
    for(int i = 0; i < 3; i++)
        printf("&c[%d] = %p\n", i, (void*)&c[i]);
    return 0;
}
