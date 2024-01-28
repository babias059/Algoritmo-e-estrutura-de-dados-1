#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int mulheres = 0;
    int homens = 0;
    int total_m = 0;
    int total_h = 0;
    char genero, op;

    printf("Digite o numero de pessoas que foram entrevistadas: \n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Digite o genero da pessoa (M/F) e sua opiniao, se gostou (S) e se não (N) %d: \n", i+1);
        scanf(" %c %c", &genero, &op);

        if(genero == 'M' || genero == 'm'){
            total_m++;

            if(op == 'S' || op == 's'){
                mulheres++;
            }
        } else if(genero == 'H' || genero == 'h'){
            total_h++;

            if(op == 'N' || op == 'n'){
                homens++;
            }
        }
    }

    printf("Total de mulheres que gostaram: %d \n", mulheres);
    printf("Total de homens que nao gostaram: %d \n", homens);

    if(total_m > 0){
        printf("Porcentagem de mulheres que gostaram: %.2f%% \n", ((float)mulheres / total_m) * 100);
    } else {
        printf("Nenhuma mulher foi entrevistada.\n");
    }

    if(total_h > 0){
        printf("Porcentagem de homens que nao gostaram: %.2f%% \n", ((float)homens / total_h) * 100);
    } else {
        printf("Nenhum homem foi entrevistado.\n");
    }

    return 0;
}
