#include <stdio.h>
#include <stdlib.h>

typedef enum meses
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Meses;

typedef struct data{
    int dia;
    Meses mes;
    int ano;
}Data;

void lerdata(Data *p){
    printf("Digite o dia:");
    scanf("%d", &p->dia);
    printf("Digite o mes:");
    scanf("%d",(int*) &(p->mes));
    printf("\nDigite o ano:");
    scanf("%d", &p->ano);
}

void imprimirdata(Data *p){
    printf("%s%d/%s%d/%d", p->dia < 10 ? "0" : "", p->dia, p->mes < 10 ? "0" : "", p->mes, p->ano);
}

int main(void)
{
    Data data;
    
    lerdata(&data);
    imprimirdata(&data);
    return 0;
}