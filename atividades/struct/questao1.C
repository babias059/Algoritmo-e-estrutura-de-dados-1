#include <stdio.h>
#include <stdlib.h>

typedef struct dados_funcionario {
    char nome[50];
    int iden;
    float salario;
    char cargo[20];
} Funcionario;

void preencher(Funcionario *func) {
    printf("Informe o nome do funcionario: \n");
    scanf(" %[^\n]s", func->nome);
    printf("Informe o id do funcionario: \n");
    scanf("%d", &func->iden);
    printf("Informe o salario do funcionario: \n");
    scanf("%f", &func->salario);
    printf("Informe o cargo do funcionario: \n");
    scanf(" %[^\n]s", func->cargo);
}

void nv_funcionario(Funcionario *func, int qtd_nv_func, int *qtd_func) {
    func = (Funcionario *)realloc(func, (*qtd_func + qtd_nv_func) * sizeof(Funcionario));
    if (func == NULL) {
        exit(1);
    }
    int contador;
    for (contador = *qtd_func; contador < *qtd_func + qtd_nv_func; contador++) {
        preencher(&func[contador]);
    }
    *qtd_func += qtd_nv_func;
}

void imprimir(Funcionario *func) {
    printf("Nome: %s\n", func->nome);
    printf("Id: %d\n", func->iden);
    printf("Salario: %.2f\n", func->salario);
    printf("Cargo: %s\n", func->cargo);
}

void alterar_salario(Funcionario *func, float nv_salario) {
    func->salario = nv_salario;
}

void max_min_sal(Funcionario *func, int qtd_func) {
    float min_sal = func[0].salario;
    float max_sal = func[0].salario;
    int pos_min = 0;
    int pos_max = 0;
    int contador;
    for (contador = 0; contador < qtd_func; contador++) {
        if (func[contador].salario < min_sal) {
            min_sal = func[contador].salario;
            pos_min = contador;
        }
        if (func[contador].salario > max_sal) {
            max_sal = func[contador].salario;
            pos_max = contador;
        }
    }
    printf("O funcionario com maior salario: \n Cargo:%s \nSalario:%.2f \n", func[pos_max].cargo, func[pos_max].salario);
    printf("O funcionario com menor salario: \n Cargo:%s \nSalario:%.2f \n", func[pos_min].cargo, func[pos_min].salario);
}

int main(void) {
    int qtd_func;
    printf("Informe a quantidade de funcionarios: \n");
    scanf("%d", &qtd_func);
    Funcionario *func = (Funcionario *)malloc(qtd_func * sizeof(Funcionario));
    if (func == NULL) {
        exit(1);
    }

    int contador;
    for (contador = 0; contador < qtd_func; contador++) {
        preencher(&func[contador]);
    }

    int opcao = 0;
    do {
        printf("Quer cadastrar um novo funcionario? \n1- Sim. | 2- Nao. \n");
        scanf("%d", &opcao);
        int qtd_nv_func = 0;
        if (opcao == 1) {
            printf("Informe a quantidade de novos funcionarios: \n");
            scanf("%d", &qtd_nv_func);
            nv_funcionario(func, qtd_nv_func, &qtd_func);
        }
    } while (opcao != 2);

    for (contador = 0; contador < qtd_func; contador++) {
        imprimir(&func[contador]);
    }

    float nv_salario;
    int id_busca;
    int func_sal_nv;

    do {
        func_sal_nv = 0;
        printf("Deseja alterar o salario? \n1- Sim. | 2- Nao. \n");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Informe o id do funcionario: \n");
            scanf("%d", &id_busca);
            for (contador = 0; contador < qtd_func; contador++) {
                if (id_busca == func[contador].iden) {
                    func_sal_nv = contador;
                }
            }
            if (func_sal_nv != -1) {
                printf("Informe o novo salario: \n");
                scanf("%f", &nv_salario);
                alterar_salario(&func[func_sal_nv], nv_salario);
                break;
            } else {
                printf("Funcionario com o id %d nao encontrado.\n", id_busca);
            }
        }
    } while (opcao == 1);

    max_min_sal(func, qtd_func);
    free(func);
    return 0;
}
