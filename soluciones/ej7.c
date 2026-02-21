
#include <stdio.h>
int main(){
    // Resolver ejercicio 7
    int m[2][4];

    printf("&m[0][3] = %p\n",(void*)&m[0][3]);
    printf("&m[1][0] = %p\n",(void*)&m[1][0]);

    if(&m[1][0] > &m[0][3])
        printf("&m[1][0] es mayor\n");
    else
        printf("&m[0][3] es mayor\n");
    return 0;
}
