#ifndef FILA_TAD_H
#define FILA_TAD_H

/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* descritor da fila */
typedef struct dFila  DFila;
typedef DFila*        pDFila;

typedef void* (*FuncaoAlocacao)   (void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDFila   criarFila          ();
void     enfileirarInfo     (pDFila, void *);
void*    desenfileirarInfo  (pDFila);
int      filaVazia          (pDFila);

/*------------------------------------------*/
/* operacoes lista de exercicio
/*------------------------------------------*/

void     inverteFila        (pDFila);
pDFila   copiarFila         (pDFila, FuncaoAlocacao);


#endif