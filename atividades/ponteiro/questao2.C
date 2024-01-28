/*
int main(void){
    int x, *p;
    x = 100;
    p = x;
    printf("Valor de p: %p\t", p);
    printf("Valor de *p: %d", *p);
}
o item a) apresenta uma advertencia, pois a declaração está incorreta.
o item b) está incorreto, pois a declaração está incorreta o dado atribuido a p devia ser o endereço.
o item c) a execução não foi bem sucedida. 
o item d) e o item e) irei apresentar agora:
*/

#include <stdio.h>
int main(void){ 
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %p\t", p);
    printf("Valor de *p: %d", *p);

    return 0;
}

/*
Agora está correto.
*/