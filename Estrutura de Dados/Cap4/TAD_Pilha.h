#ifndef PILHA_TAD_H
#define PILHA_TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* descritor da pilha */
typedef struct dPilha  DPilha;
typedef DPilha*        pDPilha;

/*typedef int   (*FuncaoComparacao) (void *, void *);
typedef void  (*FuncaoLiberacao)  (void *);
typedef void* (*FuncaoAlocacao)   (void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDPilha  criarPilha     ();
void     empilharInfo   (pDPilha, void *);
void*    desempilharInfo(pDPilha);
int      pilhaVazia     (pDPilha);
/*------------------------------------------*/
/*               Exercicios                 */
/*------------------------------------------*/
int      pilhasIguais   (pDPilha, pDPilha, FuncaoComparacao);
pDPilha  copiarPilha    (pDPilha, FuncaoAlocacao);
int      removeInfo     (pDPilha, void*, FuncaoComparacao);
pDPilha  interseccao    (pDPilha, pDPilha, FuncaoComparacao);
void     limpaPilha     (pDPilha, FuncaoLiberacao);


#endif

