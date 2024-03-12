typedef struct aluno Aluno;


/* Função que aloca memoria para um struct aluno,
 * recebe os dados via teclado, e retorna um ponteiro
 * para Aluno*/
Aluno * recebe_dados(void);


/* Função para imprimir os dados do TAD Aluno
 */
void imprimir_dados(Aluno * estudante);



/* Função para liberar a memória alocada
 * para o TAD Aluno
 */
void liberar_memoria(Aluno * estudante);