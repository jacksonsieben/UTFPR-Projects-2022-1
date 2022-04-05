#ifndef LISTA_TAD_H
#define LISTA__TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
typedef struct noh  Noh;
typedef Noh*        pNoh;

/* descritor da lista */
typedef struct dLista  DLista;
typedef DLista*        pDLista;

/* 3 tipos que representam ponteiros para fun��o */
typedef int   (*FuncaoComparacao)(void *, void *);
typedef void  (*FuncaoImpressao) (void *);
typedef void* (*FuncaoAlocacao)  (void *);
typedef void  (*FuncaoLiberacao) (void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDLista  criarListaj    ();
void     incluirInfo   (pDLista, void *);
void incluirInfoInicio (pDLista, void *);
void incluirInfoMeio   (pDLista, void *, int);
int      excluirInfo   (pDLista, void *, FuncaoComparacao);
int excluirInfoFuncLib (pDLista, void *, FuncaoComparacao, FuncaoLiberacao);
int      contemInfo    (pDLista, void *, FuncaoComparacao);
void     imprimirLista (pDLista, FuncaoImpressao);
void     destruirLista (pDLista);
pDLista  duplicarLista (pDLista, FuncaoAlocacao);
/* o parametro int estabelece a posicao da lista onde a divisao deve acontecer */
pDLista  dividirLista  (pDLista, int);
void*    buscarNohInfo (pDLista, void*, FuncaoComparacao);

#endif

