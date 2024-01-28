#include <stdio.h>

int main(){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    /*
    x recebeu o valor de 4, 
    ponteiro p recebeu o endereço de y, 
    y recebeu o valor de 1, 
    x recebeu o valor de 3.
    */
    printf("Valor de x = %d.\t \n", x);
    printf("Valor de y = %d.\t \n", y);
    printf("Valor de *p = %d.\t \n", *p);

}