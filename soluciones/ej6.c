
#include <stdio.h>
int main(){
    // Resolver ejercicio 6
     int m[2][4];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("&m[%d][%d] = %p\n", i, j, (void*)&m[i][j]);
        }
    }
    return 0;
}
