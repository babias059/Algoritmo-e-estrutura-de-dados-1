#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;
    *perimetro = 6 * l;
}
int main(){
    float l, area, perimetro;
    printf("Digite o valor do lado do hexagono: ");
    scanf("%f", &l);
    calcula_hexagono(l, &area, &perimetro);
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    return 0;
}