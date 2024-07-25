/*
Declarando vetores dinamicamente 

int *vetor = (int *) malooc(tamanho * sizeof(int));

ou 

int *vetor = (int *) calloc(tamanho, sizeof(int));

onde "tamanho é o número de elementos que você ddeseja alocar para 
o vetor e "int" é o tipo de dado de vetor.

a função malloc() aloca um bloco contíguo de memória do tamanho especificado,
enquanto a função calloc() aloca um blo contíguo de memória e inicializa todos os bytes para 0.
Exemplo:
int tamanho = 5;
int *vetor = (int *) malloc(tamanho * sizeof(int));
if (vetor == NULL) {
    printf("Erro ao alocar memoria. \n");
    exit(1);
}

É importante notar que ao usar vetores dinamicamente é necessário liberar 
manualmnete a memória quando não for mais preciso usando a função free().

free(vetor);

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5, i;
    int *vetor;
    vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. \n");
        exit(1);
    }
    
    printf("Digite os valores do vetor: \n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    free(vetor);
    return 0;
}
/*
A função realloc() é uma função que é usada para redimensionar uma area
de memoria já alocada dinamicamente.
Ela tem a seguinte sintaxe:
->  void * realloc(void *prtr, size_t size);
Ela é útil quando voce precisa alocar mais memória para um vetor 
ou matriz dinâmica, mas não quer perder os dados já armazenados nele.

Exemplo:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int tamanho = 5, nv_tamanho;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    printf("\nEntre com o novo tamanho do vetor: \n");
    scanf("%d", &nv_tamanho);
    vetor = (int *) realloc(vetor, nv_tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. \n");
        exit(1);
    }
    free(vetor);
    return 0;
}
*/