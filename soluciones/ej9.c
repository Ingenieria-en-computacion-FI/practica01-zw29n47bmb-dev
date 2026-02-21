
#include <stdio.h>
int main(){
    // Resolver ejercicio 9
    int a[5];

    printf("&a[-1] = %p\n",(void*)&a[-1]);
    printf("&a[5] = %p\n",(void*)&a[5]);

    printf("Compila pero es comportamiento indefinido\n");

    return 0;
}
